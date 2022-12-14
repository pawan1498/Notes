## SQL STATEMENT
- desription 
  `syntax`\

- example
  `query `

- attributes/operators 


## SQL SELECT
  `select column1, column2 , .... From table_name `\
  `select * from table_name `  ( to get all column in a table )

## SQL SELECT DISTINCT 
- SQL statement selects only the DISTINCT values or exclude duplicates data \
  `SELECT DISTINCT Country FROM Customers;`

- get count for distinct countries \
  `SELECT COUNT(DISTINCT Country) FROM Customers;`

## SQL WHERE 
- The WHERE clause is used to filter records.
` SELECT column1, column2, ...
  FROM table_name
  WHERE condition;`

- operator in where clause
  1. BETWEEN : between a certain range
   ` SELECT * FROM Products WHERE Price BETWEEN 50 AND 60;`


  2. LIKE : search for pattern 
    `SELECT * FROM Customers WHERE City LIKE 'se%';`\
    this give simialr pattern string 



  3. IN : To specify multiple possible values for a column	
    `select * from customers where city IN ('paris', 'london')`\

    this give all the customer where city is paris or london 


## MySQL AND, OR and NOT Operators
- we use this operator with where clause for filter our condition 
  `SELECT column1, column2, ... FROM table_name WHERE NOT condition;`


## The MySQL ORDER BY 
- is used to sort result in ascending or descending 
- it sort the records **Ascending** by default 
  `SELECT column1, column2, ... FROM table_name ORDER BY column1, column2, ... ASC|DESC;`

### ORDER BY Several Columns Example
- sort according to more than 1 column 
  `SELECT * FROM Customers ORDER BY Country, CustomerName;`
   this means that it order by country but if some rows have the same country, it order them by CustomerName.\

   `SELECT * FROM Customers ORDER BY Country ASC, CustomerName DESC`
   sorted ascending by the country and descending by country name.\

## MySQL INSERT INTO 
- used to insert new records in a table. 
  `INSERT INTO table_name (column1, column2, column3, ...) VALUES (value1, value2, value3, ...);`

- if you are adding values to all the column, you don't need to specify column name 
  `INSERT INTO table_name VALUES (value1, value2, value3, ...);`

## LEN 
- get lenght of the value 
  `SELECT LEN('W3Schools.com'); `

## MySQL NULL Values
- `SELECT CustomerName, ContactName, Address FROM Customers WHERE Address IS NOT NULL;`
  

  


-------------------------------------------------------------
# JOINS 



