s = ["abhi" , "shubham" , "kush" , "pawan"]
def each array,&blk
  i = 0 
  while i < array.count
    el = array[i]
    blk.call(el)    
    i+=1
  end 
end 

each(s) do |student|
  puts "I am in block"
  puts student 
end 