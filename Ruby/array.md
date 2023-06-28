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
- map = doesn't modify array ( insted it return a new array )
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
- In each_with_index first argument act as element and second act as index 
  `  each_with_index do |element, index| `
  
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
  

# first vs take vs limit 

- `take` The Take method returns a record without any implied order
  -  User.take(5)
     => User Load (0.5ms)  SELECT "users".* FROM "users" LIMIT $1  [["LIMIT", 5]]
- `first` The First method is similar to #take, but it returns the first record 
- `limit` The Limit method specifies a limit for the number of records to retrieve.Unlike the previous two methods, #limit requires a parameter. It always returns an Active Record Relation.
  - Since #limit returns an Active Record Relation, this means that you can continue scoping afterwards
  - User.limit(5).where(id: 1)
    User Load (0.4ms)  SELECT "users".* FROM "users" WHERE "users"."id" = $1 LIMIT $2  [["id", 1], ["LIMIT", 5]]


## array tricks 
1.  arr = [[1,2], [3,4], [55,6]]

 x,y = arr[0]
 then x become 1, y become 2

 2. 