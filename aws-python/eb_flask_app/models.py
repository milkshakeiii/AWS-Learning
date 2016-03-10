from application import db

class User(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	username = db.Column(db.String(80), unique=True)
	email = db.Column(db.String(120), unique=True)

	def __init__(self, username, email):
		self.username = username
		self.email = email

	def __repr__(self):
		return '<User %r>' % self.username

zone_to_zone = db.Table("zone_to_zone", db.Model.metadata,
	db.Column("from_zone_id", db.Integer, db.ForeignKey("zone.id"), primary_key=True),
	db.Column("to_zone_id", db.Integer, db.ForeignKey("zone.id"), primary_key=True))

class Zone(db.Model):
	__tablename_ = "zone"
	id = db.Column(db.Integer, primary_key=True)
	name = db.Column(db.String(160), unique=True)

	to_zones = db.relationship("Zone",
		secondary = zone_to_zone,
		primaryjoin = id==zone_to_zone.c.from_zone_id,
		secondaryjoin = id==zone_to_zone.c.to_zone_id,
		backref = "from_zones")

	def connect_to(self, zone):
		if zone not in self.to_zones:
			self.to_zones.append(zone)
		if self not in zone.to_zones:
			zone.to_zones.append(self)

	def disconnect_from(self, zone):
		if zone in self.to_zones:
			self.to_zones.remove(zone)
		if self in zone.to_zones:
			zone.to_zones.remove(self)

	def __repr__ (self):
		return '<Zone %r>' % self.name
