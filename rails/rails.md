#Delegate 
- it help to access attributes of associated model directly
class Order
  belong_to :customer

  delegate :name, to: :customer
end 

- order.name return the name of associated customer 

## render 
- if we pass object in render it will automatically run object.count 
- render @user => it automatically render all user present in @user 
- but partial must be present in correct directory i.e partial name should be _user.html.erb , present in view/user/_user.html.erb


 
