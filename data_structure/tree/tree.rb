class TreeNode
  attr_accessor :value, :left, :right
  #node is initialized with a value, and two children are nil
  def initialize(value)
      @value = value
      @left = nil
      @right = nil
  end
end

class Tree
  attr_accessor :root_node 

  def initialize(root_value=nil)
    @root_node = TreeNode.new(root_value)
  end 

  def insert data 
    root = root_node
    if root==nil 
        return Node.new(data)
    elsif root.value<data
        root.right=insert root.right,data 
    else
        root.left=insert root.left,data
    end
    return root
  end
  
 def preorder root
    if root==nil 
        return
    end
    print "#{root.value} "
    preorder root.left
    preorder root.right
end
def test 
  p "hi "
  p root_node.left 
  p " hello"
end 
end 

x  = Tree.new 12
p x.insert(90)
x.test
p "----"*10