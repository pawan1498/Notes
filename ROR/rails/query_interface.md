# retrieving object from the database 
1. retrieving single object
    1. find : retrieve object corresponding to the specified primary key that matches your supplied options
        - customer = Customer.find(10)
        - SQL : SELECT * FROM customers WHERE (customers.id = 10) LIMIT 1

        - customers = Customer.find([1, 10])
        - SQL : SELECT * FROM customers WHERE (customers.id IN (1,10))
        ### The find method will raise an ActiveRecord::RecordNotFound exception unless a matching record is found for all of the supplied primary keys.
        
        - If your table uses a composite primary key, you'll need to pass find an array to find a single item. For instance, if customers were defined with [:store_id, :id] as a primary key:
        -  customers = Customer.find([3, 17])
        - SQL : SELECT * FROM customers WHERE store_id = 3 AND id = 17

        - To find multiple customers with composite IDs, you would pass an array of arrays:
        - customers = Customer.find([[1, 8], [7, 15]])
        - SELECT * FROM customers WHERE (store_id = 1 AND id = 8 OR store_id = 7 AND id = 15)
    
    2. Take : The take method retrieves a record without any implicit ordering.
        - customer = Customer.take
        - SQL : SELECT * FROM customers LIMIT 1
        ### The take method returns nil if no record is found and no exception will be raised.

        - customers = Customer.take(2)
        - SQL :  SELECT * FROM customers LIMIT 2

    3. first : first methods find the first record ordered by primary key 
        - customer = Customer.first
        - SQL ; SELECT * FROM customers ORDER BY customers.id ASC LIMIT 1

        ### The first method returns nil if no matching record is found and no exception will be raised.

        - customers = Customer.first(3)
        - SQL : SELECT * FROM customers ORDER BY customers.id ASC LIMIT 3
        
        - Models with composite primary keys if customers were defined with [:store_id, :id] as a primary key:
        - customer = Customer.first

    4. last : just opposite of first 

    5. Find_by
        - Customer.find_by first_name: 'Lifo'
        - SQL : SELECT * FROM customers WHERE (customers.first_name = 'Lifo') LIMIT 1

        ### find_by give nil if no record found     
        ### The find_by! method behaves exactly like find_by, except that it will raise ActiveRecord::RecordNotFound if no matching record is found. For example:

2. Retrieving object in batches : 











# N+1 query 
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

 