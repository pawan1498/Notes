module ModuleName
 
  def self.name 
    p "pawan sharma"
  end 

  def check 
    p "pawan"
  end 
end


# ModuleName.name 

class Test
  extend ModuleName
  def self.name 
    p "bunty"
  end 
end 

Test.name 
p Test.ancestors

# p Test.methods()
