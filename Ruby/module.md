# Module 
- the main purpose of module is to group together methods and constants 
- can not create instances of a module 
- can also used for namespacing


## the :: syntax  
- Notice the :: syntax which is used to reach into nested modules and classes.

## Method in Modules 
- when you define methods inside module, those methods become instance methods of module itself. However if we define method with self.methods_name, it become class level method 

### Module ( singleton class )
- Module has its own singleton class , which is where class methods are define 
- Module is an object of Module class, thats why module has its singleton class 
- 



## use extend with modules 
- when we extend modules in a class, so all the methods in modules act as  class methods 


# QUES
1. Module are object of module class, or we can  include module in class. so in that we can say we can include object ?
- Ans: No, modules are the object that are specifically meant to be included in classes to provide shared functionality. Regular object are instances of class are not meant to be included in other classes in the same way that modules are. 
