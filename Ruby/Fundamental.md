# puts vs print vs p 
 - puts and print is use for print your data on screen, it return nil 
  - puts append newline to the text, while print not . 
 - p method using and inspect method over an object, it return actual object 
   - p method can come handy when you are trying to figure out some line of code 
  `puts ["has", 1, "jsa"]
    has
    1
    jsa
    => nil
  `
  ` p ["has", 1, "jsa"]
  ["has", 1, "jsa"]
  => ["has", 1, "jsa"]
  `

# ! after method 
- Bang or exclamation mark means that you are making a permanent saved change in your code.

# ? after method 
- it tell function should return boolean value 

# collect method 
- it execute the block for every element of collection/array and return a value 

# Argument 
- when we pass multiple arguments in function call 
  - get it directly in array with single array name fun(*args)
  - * before arguments name took all the arguments are store them in array 

- get argument name with semicolon 
  - when we have multiple arguments and confuse with arguments and parameter name 
  - then get arguments with (name:) 
  - it will be more accurate 

# super 
- super method call the parent class method 
- super get all the arguments 


# super vs super()
- super() use for exact arguments
- 

# self in ruby 
- It’s a Ruby keyword that gives you access to the current object.
- it is a magical thing in ruby 
- when we write with in class it act as class object 


# collect vs select 
- collect return boolean and select return actual value of an array 
- “.collect” runs a block of code on every item in a collection/array and returns the value. “.select” returns only the values in a collection/array that meet the criteria specified in the code block.