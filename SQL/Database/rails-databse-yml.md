default: &default
  adapter: mysql2
  encoding: utf8
  pool: <%= ENV.fetch("RAILS_MAX_THREADS") { 5 } %>
  username: root
  password: password
  socket: /var/run/mysqld/mysqld.sock
  strict: false
  variables:
    sql_mode: TRADITIONAL


----------------------------------------------------------------------------------------------------------------------------------
# Adapter 
-  adapater is software component that allows different system or software to communicate with each other. 
- here adapter helps a programming language of framework interact with special type of database
- adapter: mysql2 , it indicate the application or framework using mysql2 adapter to connect to mysql database 
  
# encoding 
- encoding: utf8 , it represent which  character encoding language is used. 
also utf8 is most popular character encoding technique, it contain wide range to character , script and symbol from diffrent language 

# pool 
- The connection pool is a cache of database connections that are kept open and ready for reuse, rather than opening and closing a new database connection for every database interaction.
-  pool: <%= ENV.fetch("RAILS_MAX_THREADS") { 5 } %> , variable="RAILS_MAX_THREADS" is to determine the pool size.
-  In Rails, the number of threads typically corresponds to the number of concurrent requests your application can handle. So, the database connection pool size is often set to match or be a multiple of the maximum number of threads your Rails application can use.
-  whenever is no free pool is present, using this script it create new connection pools 

# sockets 
-  a socket is a software abstraction that allows programs (processes) on different devices to communicate over a network
-  There are two main types of sockets: Internet Sockets and Unix Domain Sockets.
-  Internet Sockets : used IP address and port number to identify endpoints. an IP identifies host and Port number identify a specific process on that host, for communocation over the network, they can be either connection oriented tcp or connectionless udp 
-  Unix Domain Sockets: it used for local communication between process on same machine.nstead of using an IP address and port number, Unix Domain Sockets are identified by a file system path, often referred to as a socket file.
-  socket: /var/run/mysqld/mysqld.sock :  is the file path to the Unix Domain Socket file used for communication between the MySQL client and the MySQL server.
  
# strict 
- strict: false: Disables strict mode in MySQL. Strict mode controls how MySQL handles invalid or missing values in data-change statements.
- when strict mode disable : 
1. Invalid Data Handling: MySQL is more lenient in accepting and handling data that might be considered invalid or incomplete.

2. Warnings Instead of Errors: Instead of rejecting queries with invalid data, MySQL may issue warnings and adjust the data to fit the expected format.

3. Compatibility: Disabling strict mode can be useful for applications that were developed without strict mode in mind or for scenarios where you need more flexibility in handling data.
   
