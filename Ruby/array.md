# Array 
## cheat sheet 
```
  ActionMethod

  Initialize    Array.new, [], %w
  Read          [0], first, last
  Append        push, <<, unshift
  Remove        pop, delete_at, shift

```
## insert
- add something in the middle of an array? 
  $ lettters.insert(2, "test")

## count 
- if a block is given to count , it count the number of elements for which the block return a true value. 
- ex: count even number in array 
    `[1,2,3].count { |n| n.even? }`


## iteration 
- each 
- each_with_index 
- map = doesn't modify array 
- map! = modify the array directly 
- flatten 
- flat_map = this combine the effect of flat and map (flat + map)
   `
    [[1, 2, 3], [4, 5, 6]].flat_map { |a| a.inject(:+) }
    #output: [6,15]
  `
- select = if you want select item in array for certain criteria 
  - Example : find all number greater than 10 
    
    ` numbers = [3, 7, 12, 2, 49]
      numbers.select { |n| n > 10 }
      # => 12, 49
    `
## array operation 
- sort 
- unique 
- sample = pick random element from your array 
- take = slice your array 
  - array.take(2) or array[0,2]


## splat operator 
- *[1, 2], 3 becomes [1, 2, 3]

- *a, b = 1,2,3,4
  #a = [1, 2, 3]
  #b=4

- a, *b, c = 1,2,3,4
  #a=1
  #b = [2, 3]
  #c=4
- A variable with a splat operator works like a "sponge" trying to absorb as many
elements as possible, while still leaving one element for every other variable.

# operation involving multiple array 
## concatenate
  - users.concat(new_users) ( fatser process)
  - users += new_users (slow process)

- (a - b) = extract array from other array 
- a & b = element that appear in both  
- a | b = union of two array 
  