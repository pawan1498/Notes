#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr;
  arr = {12, 3, 7, 4, 28};

  int n = arr.size();
  if (n < 3)
  {
    cout << "false" << endl;
    return false;
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n - 2; i++)
  {
    if (arr[i] + arr[i + 1] > arr[i + 2])
    {
      cout << "true" << endl;
      return true;
    }
  }
  cout << "false";
  return false; 
}