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
-------------------------------------------------------------------------------------

# Metaprogramming 
- using attr_reader or attr_writer we can generate new code dynamically, like defining new method during execution 

## sending message 
- using `send` method can call other method without typical dot notation.
`send(:puts, "Hello")`
- it takes 2 argument 
  - name of method 
  - argument for that method 
- `send` method call private and protected method.
  `public_send` method here to respect private method.



## self and private method 
- 

## `.methods`
- it return all the methods associated with particular object like : instance_method , class method , method from inherited class 
- if you want method that you make only => `$ .methods(false)`
- instance method => `class_name.instance_method`
- singletin_method => `class_name.singleton_methods1`
  

## class Introspection 

## The method method (not a typo)
- their is a method called method.
- uses : 
  1. find source location 
  ` class Animal
      def self.speak 
      end 
    end 
    
    p Animal.method(:speak).source_location
  `
  2. use `call` to execute method
  3. use `to_proc` to turn this method into proc. 
    `my_proc = method(:puts)
      [5,19,10].each(&my_proc)
    `
  4. OWNER : 
    - owner method gives the owner of method
    `Array.instance_method(:sort_by).owner
      # Enumerable
    `
    - owner method is useful if you are understanding some code 
    - Example 
      ` Fixnum === 3 # true
        3 === Fixnum # false
      `

      ##### bound and unbound method 

-------------------------------------------------------------------------------------

# Array 
## cheat sheet 
```
  ActionMethod

  Initialize    Array.new, [], %w
  Read          [0], first, last
  Append        push, <<, unshift
  Remove        pop, delete_at, shift

```
## insert
- add something in the middle of an array? 
  $ lettters.insert(2, "test")

## count 
- if a block is given to count , it count the number of elements for which the block return a true value. 
- ex: count even number in array 
    `[1,2,3].count { |n| n.even? }`


## iteration 
- each 
- each_with_index 
- map = doesn't modify array 
- map! = modify the array directly 
- flatten 
- flat_map = this combine the effect of flat and map (flat + map)
   `
    [[1, 2, 3], [4, 5, 6]].flat_map { |a| a.inject(:+) }
    #output: [6,15]
  `
- select = if you want select item in array for certain criteria 
  - Example : find all number greater than 10 
    
    ` numbers = [3, 7, 12, 2, 49]
      numbers.select { |n| n > 10 }
      # => 12, 49
    `
## array operation 
- sort 
- unique 
- sample = pick random element from your array 
- take = slice your array 
  - array.take(2) or array[0,2]


## splat operator 
- *[1, 2], 3 becomes [1, 2, 3]

- *a, b = 1,2,3,4
  #a = [1, 2, 3]
  #b=4

- a, *b, c = 1,2,3,4
  #a=1
  #b = [2, 3]
  #c=4
- A variable with a splat operator works like a "sponge" trying to absorb as many
elements as possible, while still leaving one element for every other variable.

# operation involving multiple array 
## concatenate
  - users.concat(new_users) ( fatser process)
  - users += new_users (slow process)

- (a - b) = extract array from other array 
- a & b = element that appear in both  
- a | b = union of two array 
  

# first vs take vs limit 

- `take` The Take method returns a record without any implied order
  -  User.take(5)
     => User Load (0.5ms)  SELECT "users".* FROM "users" LIMIT $1  [["LIMIT", 5]]
- `first` The First method is similar to #take, but it returns the first record 
- `limit` The Limit method specifies a limit for the number of records to retrieve.Unlike the previous two methods, #limit requires a parameter. It always returns an Active Record Relation.
  - Since #limit returns an Active Record Relation, this means that you can continue scoping afterwards
  - User.limit(5).where(id: 1)
    User Load (0.4ms)  SELECT "users".* FROM "users" WHERE "users"."id" = $1 LIMIT $2  [["id", 1], ["LIMIT", 5]]


-------------------------------------------------------------------------------------
# string 
- while conctenate string use '<<' instead of '+' 
  '+' create new string always 

## string justification 


## Manipulation 
- gsub
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
-------------------------------------------------------------------------------------
# Hash 
## defualt value 
- Hash class can take a default value
-------------------------------------------------------------------------------------
# Enumerable 
- Enumerable is a module that is included in Array , Hash , Range and a few other
classes.

# `inject `
- when you want to so some opeartion on every element of array and need some kind of accumlator to hold result 
- exmaple : if you want to add all number in array , you need a varoiable to hold total value 
  - this vARIABLE will be accumulator 
  - The starting value for the accumulator can be:
    - The first element yiel-dd by each
    - The argument passed to inject (if any) 
## inject with array 

## inject with Hash 
prices = {
bacon: 10,
coconut: 20
}

  - `prices.inject(0) { |total, (key, value)| total + value }`

# using all? method
- when you want to check all item match the condition 

## none? 
- opposite of all? method 
  
## any? 
- if at least one iten match condition 
  
# Reject method 
- opposite of select , when you want all the item that dont't match certain cindotuion 
- numbers = [1,2,3,4,5]
  numbers.reject(&:odd?)
  #=> [2,4]

# partition 
- when you want to split you item in two group
  numbers = [1,2,3,4,5]
  numbers.partition(&:even?)
  #=> [[2, 4], [1, 3, 5]]


# sort_by
- Use sort_by when you need to sort a collection in a specific way (different than the
default sort)

-------------------------------------------------------------------------------------
# Ranges 
- useful when u need `any type of list in a certain interval`
- Ranges include Enumerable  so we can iterate like array 
- if u still need array you can call `to_a` on the range 
- Example 
  1. ('a'..'z').to_a
  2. (1..5)  => [1,2,3,4,5]
  3. (1...5)  => [1,2,3,4]

## step

` (2..15).step(2).to_a
### => [2, 4, 6, 8, 10, 12, 14] `

## iterate 

`(1..15).each { |n| puts n }`

## random number 

`rand(1..10)`

## Check for inclusion:

`(Time.now..Time.now + 60).include?(Time.now + 30)`
### => true 

## cover? 

`('a'..'z').cover?("c")`

## diff between include? and cover? (important!)


-------------------------------------------------------------------------------------
## implicit / explicit block 
- we can create both explicit and implicit block 
- You can pass an explicit block to another method or save it into a variable to use later.

-EXAMPLE: 
  def explicit_block(&block)
  block.call # same as yield
  end

  explicit_block { puts "Explicit block called" }

- yield method is much faster. 

# how to check if block given 
  def do_something_with_block
    return "No block given" unless block_given?
    yield
  end

# Lambda


# proc vs lambda 
- https://www.codecademy.com/learn/learn-ruby/modules/learn-ruby-blocks-procs-and-lambdas-u/cheatsheet


# closure 
- proc will carry argumnets amd methods from the contecxt where it was defined. 
- they carry refrence , so if the variable changes after the proc is created , the proc will always have the latest version. 
  
# Using to_proc 
- 

-------------------------------------------------------------------------------------
- [1,2,3].class
  #Array 
- class is also an object of Class class 
  - so you can make class by creating instance of Class object 
  - `Person = Class.new`
    `john = Person.new`

- Ancestors method => Array.ancestors 
- included_modules => Array.included_modules => return modules name included in ancestor chain 





## Singleton class 
- singleton_method are like class methods FOR CLASS
- $ every object in ruby have singleton class associated with it 
- object ka singleton_method is different , it is associated with particular object , which reside in singleton_class of particular object 

-------------------------------------------------------------------------------------

# attribute accessor 
- Instance variable in a class can not be access from outside of class 
- it can access from inside the class only 

Example : 
class Fruit 
  def initialize (name)
    @name = name
  end

  def name 
    p @name 
  end
end 

Apple = Fruit.new('apple')
Apple.@water -> give error 


- Another we can do is attribute accessor 
  class Fruit 
    attr_accessor :name
    def initialize (name)
      @name = name
    end
  end

-------------------------------------------------------------------------------------------------------------------------------------------

## const_get 
- this method is used to get the constant value within class
ex: class Test 
	MY_CONST = "hi pawan"
    end 
Note : we can not access constant directly 
so there is a method name const_get which will help to get value of constant 

- Test.const_get("MY_CONST") 
 -> "hi pawan"

Note : furthur exploration needed. 

------------------------------------------------------------------------------------------------------------------------------------------
