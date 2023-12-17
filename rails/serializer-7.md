#   # serializer 
- serialization is the process of converting complex data types, such as ActiveRecord objects or Ruby objects, into a format that can be easily stored, transmitted, or reconstructed. Serializers in Rails help with this process, allowing you to define how your objects should be represented in JSON or other formats.

we don't need multiple request to get the data, all we can do in a single request with the help of serializer 

- gem 'active-model-serializer 
- Command to create a serializer for a model 
  - rails g serializer user
- it is inherited from ActiveModel::Serializer class

  class UserSerializer < ActiveModel::Serializer
    attributes :id, :username 
  end

## Adding custom attribute 
- recently_joined?
class UserSerializer < ActiveModel::Serializer
  attributes :id, :username, :recently_joined?
  def recently_joined?
    Date.today.prev_month < object.created_at
  end
end

## Associations
- Helpfully, serializers allow us to specify what associations an object has, in the same way we do when we write out our models.

class UserSerializer < ActiveModel::Serializer
  attributes :id, :username
  has_many :chats
end




