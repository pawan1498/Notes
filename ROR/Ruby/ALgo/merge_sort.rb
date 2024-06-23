def merge_sort(array)
    # Base case: return array if it's size 0 or 1
    return array if array.length <= 1
  
    # Find the middle index to split the array
    mid = array.length / 2
  
    # Recursively split and sort both halves
    left = merge_sort(array[0...mid])
    right = merge_sort(array[mid...array.length])
  
    # Merge the sorted halves
    merge(left, right)
  end
  
  def merge(left, right)
    sorted = []
  
    # Continue merging until one of the arrays is empty
    until left.empty? || right.empty?
      # Compare the first elements of each array and push the smaller one into the sorted array
      if left.first <= right.first
        sorted << left.shift
      else
        sorted << right.shift
      end
    end
  
    # Concatenate any remaining elements from both arrays
    sorted.concat(left).concat(right)
  end
  
  # Example usage
  array = [3, 6, 1, 5, 9, 8, 2, 7, 4]
  sorted_array = merge_sort(array)
  puts sorted_array.inspect  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9]

  