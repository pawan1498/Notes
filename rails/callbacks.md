# Active record 

Note: Avoid calls to update, save or other methods which create side-effects to the object inside your callback. For example, don't call update(attribute: "value") within a callback. This can alter the state of the model and may result in unexpected side effects during commit. Instead, you can safely assign values directly (for example, self.attribute = "value") in before_create / before_update or earlier callbacks.

<!-- $ save callback is triggered every time on object is save, either it is created or udpated.  -->


##  Creating an Object

    before_validation
    after_validation
    before_save
    around_save
    before_create
    around_create
    after_create
    after_save
    after_commit / after_rollback


##  Updating an Object

    before_validation
    after_validation
    before_save
    around_save
    before_update
    around_update
    after_update
    after_save
    after_commit / after_rollback

##  Destroying an Object

    before_destroy
    around_destroy
    after_destroy
    after_commit / after_rollback


## around_filter
- around_update :update_profile_timestamp


  def update_profile_timestamp
    # Code to execute before the update
    puts "Updating user profile..."
    
    yield # This invokes the original update method
    
    # Code to execute after the update
    puts "User profile updated at #{updated_at}"
  end


## destroying an object 

Note: before_destroy callbacks should be placed before dependent: :destroy associations (or use the prepend: true option), to ensure they execute before the records are deleted by dependent: :destroy.

Note :after_commit in Rails provides a guarantee that the database transaction has successfully completed, and the data has been persisted. 
Unlike after_save, after_update, or after_destroy, which are part of the transaction and can be rolled back in case of an exception, after_commit ensures that the data is safely stored in the database before the callback is executed.

- basically after_commit is used when you want to perform action when database transaction is completed.

## after_initialize and after_find 
- when you create a new object for a model after_initialise callback will be called 
  `Obj.new `
- when you found a object after_find will called 
  `Obj.last`


## method which can skip callback 
decrement!
decrement_counter
delete
delete_all
delete_by
increment!
increment_counter
insert
insert!
insert_all
insert_all!
touch_all
update_column
update_columns
update_all
update_counters
upsert
upsert_all

## Association Callback 
before_add
after_add
before_remove
after_remove

if any associated object is created then this type of validation triggered, but this associated work with specific way. 
ex : author has_many books 
author.books << book

but book.update(author_id: 1) not triggered associated callback 

## transaction callback 
