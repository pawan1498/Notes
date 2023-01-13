#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {1, 2, 2, 3, 1, 3, 1, 1, 2, 3};
  int p = 3;
  vector<int> res;
  unordered_map<int, int> umap;
  int min_size = INT_MAX;
  int curr_size = 0;
  int start = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    umap[arr[i]]++;

    if (umap.size() >= p)
    {
      while (start < i)
      {

        if (umap.size() < p)
        {
          break;
        }
        else
        {
          if (!res.empty())
          {
            cout << "---";

            if ((res[1] - res[0]) > (i - start))
            {
              res.clear();
              res.push_back(start);
              res.push_back(i);
            }
          }
          else
          {
            res.push_back(start);
            res.push_back(i);
          }
        }

        umap[arr[start++]]--;
        if (umap[arr[start - 1]] == 0)
        {
          umap.erase(arr[start - 1]);
        }
      }
    }
  }
  for (auto x : res)
  {
    cout << x << "-->";
  }
  return 0;
}
