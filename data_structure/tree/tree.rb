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

  def insert root,data 
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

end 

x  = Tree.new 12
x.insert(x.root_node,90)
x.insert(x.root_node,9)
p "dsk"
p x.root_node.value
x.preorder x.root_node