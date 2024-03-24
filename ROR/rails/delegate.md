# delegate 

class Author < ApplicationRecord
  has_one :book

  delegate :name, to: :book, prefix: true, allow_nil: true
end
- to: :book specifies that the delegation is to the Book model.
- prefix: true adds a prefix to the delegated method, so you will use book_name instead of just name.
  - thoda spefic ho jata hai like book_name 

- allow_nil: true allows the delegation to gracefully handle cases where the associated book is nil.


## its not working in case of one-to-many abd many-to-many 
- we can use first or last associcated object 
class Author < ApplicationRecord
  has_and_belongs_to_many :books

  delegate :name, to: :preferred_book, prefix: true, allow_nil: true

  def preferred_book
    # Implement your logic to determine the preferred book
    # For example, you might want to delegate the name of the first book:
    books.first
  end
end