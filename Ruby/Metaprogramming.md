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

## Enumerable
- owner method is useful if you are understanding some code 
- Example 
  ` Fixnum === 3 # true
    3 === Fixnum # false
  `

      ##### bound and unbound method 
      