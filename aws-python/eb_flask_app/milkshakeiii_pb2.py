# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: milkshakeiii.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='milkshakeiii.proto',
  package='milkshakeiii',
  serialized_pb='\n\x12milkshakeiii.proto\x12\x0cmilkshakeiii\"s\n\x08GameTurn\x12\x0f\n\x07game_id\x18\x01 \x01(\t\x12-\n\x0cplaced_piece\x18\x02 \x01(\x0e\x32\x17.milkshakeiii.PieceType\x12\x14\n\x0c\x63olumn_place\x18\x03 \x01(\x05\x12\x11\n\trow_place\x18\x04 \x01(\x05\"@\n\x0bGameHistory\x12\x31\n\x11\x63onstituent_turns\x18\x01 \x03(\x0b\x32\x16.milkshakeiii.GameTurn*u\n\tPieceType\x12\x0c\n\x08NO_PIECE\x10\x00\x12\n\n\x06\x43IRCLE\x10\x01\x12\n\n\x06SQUARE\x10\x02\x12\x11\n\rDOWN_TRIANGLE\x10\x03\x12\x0f\n\x0bUP_TRIANGLE\x10\x04\x12\x06\n\x02\x45X\x10\x05\x12\t\n\x05UP_EL\x10\x06\x12\x0b\n\x07\x44OWN_EL\x10\x07')

_PIECETYPE = _descriptor.EnumDescriptor(
  name='PieceType',
  full_name='milkshakeiii.PieceType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NO_PIECE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CIRCLE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SQUARE', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DOWN_TRIANGLE', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UP_TRIANGLE', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EX', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UP_EL', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DOWN_EL', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=219,
  serialized_end=336,
)

PieceType = enum_type_wrapper.EnumTypeWrapper(_PIECETYPE)
NO_PIECE = 0
CIRCLE = 1
SQUARE = 2
DOWN_TRIANGLE = 3
UP_TRIANGLE = 4
EX = 5
UP_EL = 6
DOWN_EL = 7



_GAMETURN = _descriptor.Descriptor(
  name='GameTurn',
  full_name='milkshakeiii.GameTurn',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='game_id', full_name='milkshakeiii.GameTurn.game_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='placed_piece', full_name='milkshakeiii.GameTurn.placed_piece', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='column_place', full_name='milkshakeiii.GameTurn.column_place', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='row_place', full_name='milkshakeiii.GameTurn.row_place', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=36,
  serialized_end=151,
)


_GAMEHISTORY = _descriptor.Descriptor(
  name='GameHistory',
  full_name='milkshakeiii.GameHistory',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='constituent_turns', full_name='milkshakeiii.GameHistory.constituent_turns', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=153,
  serialized_end=217,
)

_GAMETURN.fields_by_name['placed_piece'].enum_type = _PIECETYPE
_GAMEHISTORY.fields_by_name['constituent_turns'].message_type = _GAMETURN
DESCRIPTOR.message_types_by_name['GameTurn'] = _GAMETURN
DESCRIPTOR.message_types_by_name['GameHistory'] = _GAMEHISTORY

class GameTurn(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _GAMETURN

  # @@protoc_insertion_point(class_scope:milkshakeiii.GameTurn)

class GameHistory(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _GAMEHISTORY

  # @@protoc_insertion_point(class_scope:milkshakeiii.GameHistory)


# @@protoc_insertion_point(module_scope)