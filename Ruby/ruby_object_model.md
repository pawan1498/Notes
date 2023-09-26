- [1,2,3].class
  #Array 
- class is also an object of Class class 
  - so you can make class by creating instance of Class object 
  - `Person = Class.new`
    `john = Person.new`

- Ancestors method => Array.ancestors 
- included_modules => Array.included_modules => return modules name included in ancestor chain 





## Singleton class 
- singleton_method are associated   with single object 
- $ every object in ruby have unique singleton class associated with it 
- object ka singleton_method is different , it is associated with particular object , which reside in singleton_class of particular object 


str = "test string"
str is an object of string class, so with this object we can create singleton methods 

def str.show 
  puts self 
end 

show is singleton_method of str object which reside in singleton class 
str.show -> "test string" 

- we can get singleton method by using method singleton_methods
str.singleton_methods will give you all the singleton mehtods 