#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {-10, 5, 5, -5, 2};
  int n = arr.size();
  vector<vector<int>> res;

  // brute force (working code )

  // for (int i = 0; i < n - 2; i++)
  // {
  //   for (int j = i + 1; j < n - 1; j++)
  //   {
  //     for (int k = j + 1; k < n; k++)
  //     {
  //       if (arr[i] + arr[j] + arr[k] == 0)
  //       {
  //         res.push_back({arr[i], arr[j], arr[k]});
  //       }
  //     }
  //   }
  // }

  // optimise

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n - 2; i++)
  {
    if (i > 0 && arr[i] == arr[i - 1]) continue;
    int left = i + 1;
    int right = n - 1;
    while(left < right){
      int sum = arr[i] + arr[left] + arr[right];
      if( sum == 0  ){
        res.push_back({arr[i],arr[left],arr[right]});
        ++left;
        --right;
        while (left < right && arr[left] == arr[left - 1]) ++left;
        while (left < right && arr[right] == arr[right + 1]) --right;
      }
      else if( sum < 0){
        ++left;
      }
      else{
        --right;
      }
    }

  }

  // print ans
  for (int i = 0; i < res.size(); i++)
  {
    for (int j = 0; j < res[i].size(); j++)
    {
      cout << res[i][j] << " ";
    }
  }
}