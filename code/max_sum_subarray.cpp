#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long  curr = 0 ; 
    long long  max = INT_MIN;
    if (n <= 0 )
        return 0 ;
    for(long long i = 0; i<n;i++){
        curr = curr + arr[i];

        if( curr < 0 )
            curr = 0 ;
        if(curr > max)
            max = curr;
    }
    return max ;  
}
int main(){
  int n ;
  int arr [n];

  maxSubarraySum(arr,n);

}