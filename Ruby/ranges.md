# Ranges 
- useful when u need `any type of list in a certain interval`
- Ranges include Enumerable  so we can iterate like array 
- if u still need array you can call `to_a` on the range 
- Example 
  1. ('a'..'z').to_a
  2. (1..5)  => [1,2,3,4,5]
  3. (1...5)  => [1,2,3,4]

## step

` (2..15).step(2).to_a
### => [2, 4, 6, 8, 10, 12, 14] `

## iterate 

`(1..15).each { |n| puts n }`

## random number 

`rand(1..10)`

## Check for inclusion:

`(Time.now..Time.now + 60).include?(Time.now + 30)`
### => true 

## cover? 

`('a'..'z').cover?("c")`

## diff between include? and cover? (important!)
- 