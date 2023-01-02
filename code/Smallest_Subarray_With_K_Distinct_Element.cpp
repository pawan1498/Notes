#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {5, 5, 5, 1, 23, 3};
  int p = 3;
  vector<int> res;
  unordered_map<int, int> umap;
  int min_size = INT_MAX;
  int curr_size = 0;
  for (int i = 0; i < arr.size() - p + 1; i++)
  {
    umap.clear();
    for (int j = i; j < arr.size(); j++)
    {

      umap[arr[j]]++;
      for (auto u : umap)
      {
        cout << u.first << " " << u.second << endl;
      }
      if (umap.size() >= p)
      {

        // cout << "pppppppppppppppppppppppppppp";
        cout << i << "  ----" << j << endl;
        curr_size = j - i + 1;
        if (curr_size < min_size)
        {
          min_size = curr_size;
          res.clear();
          res.push_back(i);
          res.push_back(j);
          if (curr_size == p)
            return 0;
        }
        break;
      }
      else
      {
        if(umap[arr[j]] > 1){
          break; 
        }
      }
    }
    cout << "=--------------------------" << endl;
  }

  // if (res.size() > 0)
  // cout << "hey";
  for (auto i : res)
  {
    cout << i << " " << endl;
  }

  return 0;
}
