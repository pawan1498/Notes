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
- 