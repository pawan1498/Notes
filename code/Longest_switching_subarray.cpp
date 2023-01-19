#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {2, 4, 2, 4};
  int start = 0, i = 2;
  int n = arr.size();
  int ans = 0;

  if (n == 1)
  {
    ans = 1;
  }
  else if (n == 2)
  {
    ans = 2;
  }
  else
  {
    while (i < n)
    {
      
        if (arr[i] != arr[i - 2])
        {
          if (ans < (i - start))
            ans = i - start;
          
          start = i - 1;
        }
        i++;
     
    }
  }

  if (ans < (i - start))
            ans = i - start;
  cout << ans;
}