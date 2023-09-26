# Software Design Principle 
- software design principle help us to avoid bad design. 
  
3 Important characterstics of a bad design that should be avoided. 
- Rigidity - hard to change , because every change effect other part of system 
- Fragility - when you make a change unexpected part of system break 
- immobility - hard to reuse in another application 

## solid principle are : 
1. Single responsiblity: one class or file should not have alot of responsibility, it should be divided into simpler one.
2. Open/close: Open for extention but close for modification.

  
3. Liskov substitution: Subclasses should add to main class behaviour not replace it.
4. Interface segregation: client should not be dependent on methods they don't use.

5. Dependency inversion: High-level modules shouldn’t depend on low-level modules. Both modules should depend on abstractions. In addition, abstractions shouldn’t depend on details. Details depend on abstractions

## example 
- let take a class computer it need Mouse and Keyboard 
- let create a mouse class 

Advantages of these pricip  le 
1. avoid duplicate code 
2. easy to maintain 
3. easy to understand 
4. flexible software 
5. reduce complexity 
