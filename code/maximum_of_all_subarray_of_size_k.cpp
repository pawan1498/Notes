#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {2, 4, 2, 4};
  int n = arr.size();
  int k = 2;
  map<int, int> umap;
  vector<int> res;
  int i = 0;
  int start = 0;
  while (i < n)
  {
    if (i >= k)
    {
      // cout << "s"<<endl;
      res.push_back(umap.rbegin()->first);

      umap[arr[start++]]--;

      if (umap[arr[start - 1]] == 0)
        umap.erase(arr[start - 1]);
    }
    umap[arr[i]]++;
    i++;
  }
  res.push_back(umap.rbegin()->first);

  for (auto j : res)
  {
    cout << j << " "<<endl;
  }
  
}
