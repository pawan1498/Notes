#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> arr, int n)
{
   int max_so_far=0, max_ending_here=0;
    for(int i=0; i<n; i++){
        max_ending_here=max(arr[i], max_ending_here+arr[i]);
        max_so_far=max(max_so_far, max_ending_here);

    }
    return max_so_far;
}
int main()
{
  vector<int> arr = {1, 0, 1, 0, 1, 0, 1, 0};
  int n = arr.size();
  int c1 = 0, c0 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      arr[i] = -1;
      c1++;
    }
    else
    {
      c0++;
      arr[i] = 1;
    }
  }
  cout <<  c1+maxSubarraySum(arr, n);
}