# Proc 
- Proc are similar to block but ARE Objec, SO They can assigned to variable and passed around like any other object, 
my_proc = Proc.new { |x| puts x * 2 }
my_proc.call(3) 

## urianry operator 
- when you prefix '&' to variable, it convert the variable to a proc object, this is particualary useful when you pass the block of code stored in a varibale to a method that accept a block 

my_proc = Proc.new { |x| puts x * 2 }
[1, 2, 3].each(&my_proc)  # Passing my_proc as a block to each method


## Block Parameter (&block):
When defining a method, you can use the & prefix before the last parameter to indicate that the method can accept a block as an argument. This is useful when you want to treat the block as a Proc object within the method.

def my_method(&block)
  block.call if block_given?
end

my_method { puts "Hello, world!" }

In this method definition, &block indicates that my_method can accept a block as an argument, and that block will be converted into a Proc object named block within the method. You can then call this Proc object using the call method, just like you would with any other Proc object.