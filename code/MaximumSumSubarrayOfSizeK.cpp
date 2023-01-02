#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {1, 2, 4, 5};
  int k = 3;
  int maxsum = 0;
  int currsum = 0;
  int start = 0, end = 0;
  while(end < arr.size())
  {
    if (end - start + 1 <= k)
    {
      currsum = currsum + arr[end];
      end++;
    }
    else
    {
      currsum = currsum + arr[end] - arr[start];
      end++;
      start++;
    }
    cout << currsum << "--" ;
    if (currsum > maxsum)
      maxsum = currsum;
  }

  cout << maxsum;
}