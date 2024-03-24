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
  