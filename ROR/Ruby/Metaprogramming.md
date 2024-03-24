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
      
## Monkey patching 
- Monkey patching is a technique in Ruby metaprogramming that allows you to modify or extend the behavior of an existing class or module at runtime. It involves reopening the class or module and adding or modifying methods or attributes.
- This can be a powerful tool, but it can also be dangerous if not used carefully, as it can cause unexpected behavior or conflicts with other code.

### Defined_method : 
- The define_method is a Ruby method that allows developers to define new methods at runtime. This method takes a block of code and creates a new method that executes that code. This can be useful for creating dynamic methods that are generated at runtime.

### method_missing : 
- The method_missing is a method that is called when Ruby cannot find a method in an object's class or any of its ancestors. This method can be used to dynamically handle method calls and generate methods at runtime.
