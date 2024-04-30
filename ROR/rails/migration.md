1. Irreversible migration 
- can use up-down migration instead of change 
    def up
        change_table :products do |t|
        t.change :price, :string
        end
    end

    def down
        change_table :products do |t|
        t.change :price, :integer
        end
    end

2. Creating Migration 
- add_column 
- remove_column 
- add_index 

- create_table 
- add_reference :products, :user, foreign_key: true 
    - bin/rails generate migration AddUserRefToProducts user:references
    - This migration will create a user_id column. References are a shorthand for creating columns, indexes, foreign keys, or even polymorphic association columns.

3. creating join table 
The migration method create_join_table creates an HABTM (has and belongs to many) join table. A typical use would be:
- create_join_table :products, :categories


