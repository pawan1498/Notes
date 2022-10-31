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

