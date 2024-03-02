Question 
- latest Ruby release 
- Latest Rails release 
- Rails Directory structure 
- helper vs Concern and lib <>
- metaprogramming https://www.toptal.com/ruby/ruby-metaprogramming-cooler-than-it-sounds
- Differece between has_and_belongs_to_many and has_many through 
- Diff STI and polymorphism 
- monkey patching <>
- Diff Active model and Active record <>
- Active storage 
- Include vs Join 
- load vs include and require <>
- diff between unique key and primary key <>
`
Ans:

# Active Record : 
- Active record is a part of rails framework responsible for ORM ( object relationship mapping ), which means it faciliate the interaction between ruby object and the database. 
- Active record models represents database tables, with each instance of a model representing a row in that table. 
- It provides features like CRUD, validations, associations, callbacks, and querying methods.

# Active model : 
- it is a module in rails that provide a framework for creating ruby classes that can interact with action pack ( rails view and controller) without being tied to a database table. 
- It provide a feature like validation, attribute handling, serialization and type casting 

# load vs require vs include 
- REQUIRE
    - 'require' is built in ruby methods used to load libraries or files. 
    - it is typically used at the top of a file to bring in external dependencies or libraries . 
    - when you 'require' a file, Ruby will load and execute it only once, even if you call 'require' multiple time. 
    - 'require' is commonly used to include gems or other external libraries needed by the application. 
- Load : 
    - Load is built in method in ruby to load and execute ruby files. 
    - unlike 'require' , 'load' will reload the file every time you call it, even if the file has been loaded before.
    - it's is useful when you want to ensure that a file is reloaded, such as in development env when you are actively changing code . 
    - In Rails, load might be used in certain development scenarios where you want to ensure that changes to files are immediately reflected without restarting the server.
- INCLUDE  :
    - 'include' is a ruby keyword used to mix a module method into a class or module. 
    - it's used to add fucntionality to a class without using inheritance. 
    - when you include a module, module methods become available as instance methods of the class or module including it. 

# Helper vs Concern and lib
## Concern 
- Concerns are modules containing reusable code that can be shared across different parts of the Rails application, such as models, controllers, or even other concerns. Concerns are typically used to encapsulate shared behavior or functionality that doesn't belong in a single model or controller but is still relevant to multiple components.
- concern can be used in model, controller, services, view-helper, jobs, API-controller and helper 

## lib/
- The lib/ directory is a standard directory in Rails applications where you can place arbitrary Ruby code that doesn't fit into the conventional Rails structure.

- The lib/ directory is meant for housing generic, standalone Ruby modules, classes, or libraries that are not directly tied to the Rails framework or any specific component of the application.

## Helper 
- Helpers are modules containing methods that can be used to encapsulate logic related to views in Rails applications. They are primarily used to assist with generating HTML, formatting data, or performing other view-related tasks. Helpers are often used to extract repetitive view logic and keep views cleaner and more readable.
- Helper are automatically included in views 
- like for user model we created CRUD in Usercontroller for the view pages user helper is autoamtically included.


# Unique and Primary key 
- A primary key is a column or set of columns that uniquely identifies each record in a table and cannot have NULL or duplicate values. What is the unique key? Unique key is a column or set of columns that prevent duplicate values in a column and can store NULL values.
- unique key can represent alternate way to identify records 
- INDEXING : Unique key are often automatically indexed by DBMS to improve query performance


# Rails 7 New Updates 
1. 