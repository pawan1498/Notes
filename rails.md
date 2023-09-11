# MVC 
- it stand for model view controller 
1. Model 
- model represent the application and business logic 
- it interact with database to retrive and manipulate and store data 
- it defines the strcuture and behaviour of data entities

2. view 
- the view is responsible to presenting the data to the user 
- view focus on presentation and user interface 

3. controller 
- it handle user request, process them, and interact with model ( to fetch and manipulate data )
- it basically used to manage the flow of request 
- 

# Delegate 
- it help to access attributes of associated model directly
**class Order
  belong_to :customer

  delegate :name, to: :customer
end** 

- order.name return the name of associated customer 

# strong paramter 
- strong parametr are the security feature in ROR that allow you to specify, which parameter is used.
- it prevent unauthorized or unexpected parameter from being used in mass assignment, if the attacker tries to include additional parameter in the request, they will be ignored 


## render 
- if we pass object in render it will automatically run object.count 
- render @user => it automatically render all user present in @user 
- but partial must be present in correct directory i.e partial name should be _user.html.erb , present in view/user/_user.html.erb


# Authentication 
- Sevral methods for implementing authentication 
1. session based 
2. Token based
3. Devise gem 
4. omniauth 
5. custom 


## Rails Forms
1. form_for 