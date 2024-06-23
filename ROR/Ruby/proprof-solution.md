proprof-solution.md

# Answer 1. (erroe in rails )
1. Routes : Routing error 
2. Controller
- Active REcord : not found 
- Internal server erorr 
- template not found 

3. Model : 
- method missing
-  String can't be coerced into Integer

# Answer 2 (N+1 sql query )

N+1 query 
- The N+1 query problem is a common performance issue in database-backed applications like those using Ruby on Rails with ActiveRecord. It occurs when an application makes one query to fetch a collection of objects and then makes an additional query for each object in that collection to fetch associated objects.

SELECT * FROM posts
For each post, SELECT * FROM comments WHERE post_id = ?

- Resolving the N+1 Query Problem
    To resolve this, you can use includes, preload, or eager_load to load associated records in a single query.

## using includes
- @posts = Post.includes(:comments)
- SQL : 
    SELECT * FROM posts
    SELECT * FROM comments WHERE post_id IN (1, 2, 3, ...)


## using preload
- it works same as include 

## using eager_load
- @posts = Post.eager_load(:comments)
- SQL : 
    - SELECT posts.*, comments.*
        FROM posts
        LEFT OUTER JOIN comments ON comments.post_id = posts.id

## Choosing Between includes, preload, and eager_load
- Use includes when you want ActiveRecord to decide whether to use preload or eager_load based on the context.
- Use preload when you want to ensure that associated records are loaded in separate queries.
- Use eager_load when you want to force an SQL join.

# Answer 3 pass block to a method and accept as proc


s = ["abhi" , "shubham" , "kush" , "pawan"]

def each array,&blk
  i = 0 
  while i < array.count
    el = array[i]
    blk.call(el)    
    i+=1
  end 
end 

each(s) do |student|
  puts "I am in block"
  puts student 
end 

# Answer 4  Includes use which joins
includes with no conditions: Generates separate queries to fetch the associated records.
SELECT * FROM posts
SELECT * FROM comments WHERE post_id IN (1, 2, 3, ...)

includes with conditions on the associated records: Generates a single query with a LEFT OUTER JOIN.
SELECT posts.*, comments.*
FROM posts
LEFT OUTER JOIN comments ON comments.post_id = posts.id
WHERE comments.body LIKE '%Rails%'

# Answer 5 GEnerate array of 10 filled random value 
Array.new(10){rand(100)}


# Answer 6 Diff between destroy and delete 
1. destroy 
- trigger callback 
- return object or false 
- handle associated records 

2. delete 
- Don't trigger callback 
- return the number of record deleted or nil 
- Do not handle associated record 

# Answer 7 Concerns
- Concerns 

# Answer 8 helpers

# Answer 9 Mixin

# Answer 10 Closure (prnding)

# Answer 11 Rack 

# Answer Diff between hash and JSON

# Access conrtrol 

## initialize method is always private 
- Public : public method can be called by both outside and inside of class

## what is gemset 
- gemset refer to a mechanism provided by a tool like rvm to manage different sets of gem 
- rvm allow you to create isolate environment called gemset, each gemset contain own set of gem installed, seprate from other gemsets. 
- this is particulary useful when you have to work on multiple project that require different version of gems or differnt set of dependencies 

## 