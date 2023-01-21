#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {2, 4, 2, 4};
  priority_queue<int> pq;
  int n = arr.size();
  int k = 2;
 
  vector<int> res;
  int i = 0;
  int start = 0;

  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);

  }
  int x = pq.top();
  res.push_back(x);




  for(auto j : res){
    cout << j << " ";
  }
}
