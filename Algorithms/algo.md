# two pointer
- Primary condition is monotonicity i.e applying certain condition at each step to optimise the algo. 

## two types 
1. Equi-directional 
- Here we maintain a sliding window of flexible length whose end point are store in moving pointer 
- ** we always keep one pointer behind the other and use other one to expand window size.

2. Opposite-directional 


### coding problem related to Equi-Directional 
* Find max sum of contagious subarray of size k 
* middle node of linked list 
* linked list cycle 
* longest substring without repeating chracter 
* remove duplicates from sorted array 
 
### coding problem related to Opposite-Direction 
* Two sum || sorted array 
* valid Palindrome 
* move zeroes 
* reverse string 
* remove element 

# sliding window 
- it is an optimization technique used in array like data structure. 

## How to identify sliding window 
- ques type : find subarray, with given condition

## ques 
- Max_sum_subarray_with_size_k - https://github.com/w3villa-pawan/Notes/blob/main/code/MaximumSumSubarrayOfSizeK.cpp
- Smallest_subarray_with_K_Distinct_Element - https://github.com/w3villa-pawan/Notes/blob/main/code/Smallest_Subarray_With_K_Distinct_Element.cpp



# Array 
## kadane algorithm 
- it is used to find max sum subarray from given array 
- it reduce the brute force time complexity O(n2) -->  O(n) 



## sort_012
- condition for this sorting algo : Array contain only 3 type of elements with any frequency 
- Approach : 
  - we maintain 3 pointer low, mid , high 
  - from start to low pointer all elements should be 0.
  - from low to mid all are 1.
  - from low to high (unsorted array)
  - from high to end all are 2. 

- we need to clear the unsorted array ( low to high)

