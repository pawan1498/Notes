#include <bits/stdc++.h>
using namespace std;
int maxSubarray_with_k_concat(vector<long long> arr, int n)
{
  int max_so_far = 0, max_ending_here = 0;
  for (int i = 0; i < n; i++)
  {
    max_ending_here = max(arr[i], max_ending_here + arr[i]);
    max_so_far = max(max_so_far, max_ending_here);
  }
  return max_so_far;
}
int main()
{
  vector<int> arr = {1 ,3};
  int n = arr.size();
  int k=3 ;
  vector<long long> ans;

  long long sum = 0;

  long long maxi = INT_MIN;

  for (int i = 0; i < k; i++)
  {

    for (int m = 0; m < n; m++)
    {

      ans.push_back(arr[m]);
    }
  }

  cout << maxSubarray_with_k_concat(ans,ans.size());
}