def reverse_string(str)
    reversed_str = ""
    str.each_char do |char|
      reversed_str = char + reversed_str
    end
    reversed_str
  end
  
  # Example usage
  str = "Hello, World!"
  reversed_str = reverse_string(str)
  puts reversed_str  # Output: "!dlroW ,olleH"
  