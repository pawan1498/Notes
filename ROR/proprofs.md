Different types of error (eg.. argument error, syntax error)
N+1 query (what and how to resolve)
pass block to a method and accept as proc
Includes use which joins
Sql Query for includes
On Using includes how any sql queries will be triggered to the database

array[10] = []

array[10].map { |a| Secure.alphanumeric(1) }

Company
User
Deparments
Jobs
JobTypes
Candidate
Aplicant
InterviewRound
Questions
PlannedInter


Class User < Person
	attr_accessor :name, :age

	def initializer(name, age)
		@name = name
		@age = age
		super
	end

	def details(&name)
		# yeild
		puts "Name: #{name}"
		puts "Age: #{age}"
	end
end

Class Person
	def initializer
	end

	def data 
	end
end


user = User.new("Vaibhav", 25)
d = User.details { puts "hello !"}
a.call()









words = ["Dan","Vince", "mike", "sean"]
sorts according to dictionaries

words.sort_by { |word| word }

arr = ['one', 'two', 'one', 'one']
frequency = {}

arr.each do |element|
	if frequency[element]
		frequency[element] += 1
	else
		frequency[element] = 1
	end
end

puts frequency







Select * From TableName LEFT_JOIN ON A.primary_key = B.foregin_key



"Vince".reverse

string = "Vince"
reverse = []
reverse_string = ''

string.each_with_char do |character|
	# reverse.push(character)
	reverse_string = character + reverse_string
end

#reverse = ['e', 'c', 'n', 'i', 'v']

#reverse_string = ''
#reverse.each do |element|
#	reverse_string += element
#end

puts reverse_string



v + ''
i +  v
n + iv


Ques : Diff between destroy and delete 