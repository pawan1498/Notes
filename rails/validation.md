new_record?  method is used to determine the record is saved in database or not. 
- this method give false once object is save in database. 

we are added validation to the backend server to prevent the entry of any false/invalid data in database 
some method will trigger validation, if any validaton fail, the object will marked as invalid and active record will not perform the insert or update operation 

create / create!
### the bang version raise an exception if the record is invalid 


## skipping validation:
decrement!
decrement_counter
increment!
increment_counter
insert
insert!
insert_all
insert_all!
toggle!
touch
touch_all
update_all
update_attribute
update_column
update_columns
update_counters
upsert
upsert_all

Note that save also has the ability to skip validations if passed validate:
false as an argument. This technique should be used with caution.

`save(validate: false)`

- valid? and invalid? 
- errors `Person.create().errors`

# validation helper 

1. acceptance : if there is a checkbox in you form, like "term and condition" that every user need to check. 
then you can add validation of 
  `validates :terms_of_service, acceptance: true`

2. Confirmation : if there is field like password and password_confirmation. so confirmation helper validate this both field have same data. 

   `validates :email, confirmation: { case_sensitive: false, message: "should match the confirmation", attribute: :check_email }`

   by default it check the attribute with  same name successor with '_confirmation', like for email it check the attribute with name "email_confirmation" or you can pass attribute field if the field name is different. 


3. Format : if you want to save data with a specific format like email address
  `  validates :email, format: { with: /\A[\w+\-.]+@[a-z\d\-.]+\.[a-z]+\z/i, message: "is not a valid email address" }`

4. inclusion : validate the attribute, values are included in a given set. 
   ` validates :size, inclusion: { in: %w(small medium large), message: "%{value} is not a valid size" }`

5. exclusion 
6. length : validate the length of attribute 
    `     
      validates :name, length: { minimum: 2 }
     validates :bio, length: { maximum: 500 }
     validates :password, length: { in: 6..20 }
     validates :registration_number, length: { is: 6 }
  `

  