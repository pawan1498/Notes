#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {0, 1, 2, 1, 2, 0};

  // dutch national flag algo

  int low = 0, mid = 0, high = arr.size() - 1;
  int i = 0;
  while (mid <= high)
  {

    if (arr[mid] == 0)
    {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(arr[mid], arr[high]);

      high--;
    }
    i--;

    for (auto x : arr)
    {
      cout << x << " ";
    }
    cout << " low=" << low;
    cout << endl ;
  }

  for (auto x : arr)
  {
    cout << x << " ";
  }
}