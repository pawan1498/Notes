def binary_search_rotated(arr,left,right,key)
 ` mid = (left+right)/2
  return mid if arr[mid] == key
  return -1 if left > right
      # If the left half of the array is sorted
  if arr[left] <= arr[mid]
    # Check if the key lies in the left half of the array
    if key >= arr[left] and key <= arr[mid]
        # Search the left half of the array recursively
        return binary_search_rotated(arr, left, mid - 1, key)
    else
        # Search the right half of the array recursively
        return binary_search_rotated(arr, mid + 1, right, key)
    end 
  else
    # If the right half of the array is sorted
    if key >= arr[mid] and key <= arr[right]
        # Search the right half of the array recursively
        return binary_search_rotated(arr, mid + 1, right, key)
    else
        # Search the left half of the array recursively
        return binary_search_rotated(arr, left, mid - 1, key)
    end
  end 

  `
end 

a = [6,7,8,1,3,4,5]
b = [1,3,4,5,6,7]
puts binary_search_rotated(a,0,a.size()-1,8)
# 1,2,3,4