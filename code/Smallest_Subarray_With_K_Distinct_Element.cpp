#include<bits/stdc++.h>
using namespace std;
int main(){
  vector <int> arr = {2,2,5,5,5,1};
  int k = 3;
  unordered_map<int, int> umap;

  for (auto i = 0,j=i+k-1; j < arr.size(); i++,j++)
  {
    int itr = i ; 
    umap.clear();
    while(itr<=arr.size()){
      umap[arr[itr++]]++;
    }
   for (auto x : umap)
    cout << x.first << " " <<
            x.second << endl;

  cout << "-------------" << endl;

    if (umap.size() == k){
      cout << i << " " << j << endl;
      return 0;
    }
  }


   
  return 0;
}
