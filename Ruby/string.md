# string 
- while conctenate string use '<<' instead of '+' 
  '+' create new string always 

## string justification 


## Manipulation 
- gsub
  it is used for substiute 
  puts "Sample".gsub!(/[a]/, '*')         => S*mple        

- split = "pawan-sharma".split('-') => ["pawan" , "sharma"]

## Substring 
  `"hello there"[0..4]
    # "hello"
    "hello there"[1..-1]
    # "ello there"
  `
  ### useful method for string :
  - upcase/downcase 
  - capitalize 
  - reverse 
  - include?
  - start_with?
  - end_with? 

## Working with Characters
- `each_char and char` 
  
 - ` "Ruby is cool".each_char { |ch| puts ch } `
 - chars is equivalent to each_char.to_a :
    `"Many words".chars
      # => ["M", "a", "n", "y", " ", "w", "o", "r", "d", "s"]
    `

## Immutability and Frozen string
- string in ruby are mutable, means can change them. 
- ### Immutable : 
  - you can make string immutable by using the `freeze ` method 
  - frozen strings act like symbols.

  `Remember: A symbol (like :bacon or :apple ) is a kind of Ruby object
  that is used as an identifier, for hash keys, method arguments, etc.
  Don't confuse them with variables, symbols ARE values, variables
  POINT TO values.`

- ### object_id 
  - using object_id method you can get internal id of an object. 
  - With this id you can verify that two objects are the same.
    `
      str_1 = "cat".freeze
      str_2 = "cat".freeze
      str_1.object_id == str_2.object_id # 
    `
  - Non frozen string have diff object_ids 

## frozen object 
- freezing is not limited to string, any object can be frozen. 
- `frozen? ` is used to check object is frozen or not .
- freezing is not reversible process, means frozen object can't be unforzen. 
- **the contained objects won't be frozen.** 
  - like Array contain other object 
  - freezing is only one level deep 

## symbol 
- Confusion between symbol and variable 
 - symbol are values 
 - variable point to values 