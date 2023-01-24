#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {1, 2, 3, 4, 1};
  int n = arr.size();

  unordered_map<int, int> umap;
  int k = 54, i = 0, start = 0;
  int uk = k + 2;
  while (i < n)
  {
    umap[arr[i]]++;

    if (i == k + 1)
    {
      if (umap.size() != k + 2)
      {
        cout << "true";
        return 0;
      }
    }
    else if (i >k)
    {

      umap[arr[start++]]--;

      if (umap[arr[start - 1]] == 0)
        umap.erase(arr[start - 1]);
    }
    i++;
  }
  cout << "false";

  return true;
}