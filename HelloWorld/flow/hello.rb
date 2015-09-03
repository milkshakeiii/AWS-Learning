class HelloWorld
  def hello(input)
    true_pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938"
    given_pi = input[:given_pi]
    if (given_pi.nil? or given_pi.length < 3)
      return "I'll give you a hint: 3.14159..."
    end
    for i in 0..given_pi.length-1
      if (i > true_pi.length - 1)
        return "Nice!  You know more pi than me (>" + (true_pi.length-1).to_s + " digits)"
      end
      if (!(true_pi[i] == given_pi[i]))
        return "Not bad!  There was a mistake but it was correct up to the digit in place " + i.to_s
      end
    end
    return "Nice 8) .  You know " + (given_pi.length-1).to_s + " digits of pi."
  end
end
