// approach 
// - Continiously add element in window untill you find subarray with K distinct element, then update the indices in result 
// - then decrease the current window size (until the window size decrease to 0) and check for condition , if you find new subarray with shortest length then update result 

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
