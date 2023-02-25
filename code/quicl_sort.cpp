#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n){
  for(int i = 0 ; i< n ; i++){
    cout << arr[i] << " ";
  }
  
}

int quick_sort(int arr[], int l , int h){
  if(l<h){
    int pivot  = partition(arr, l , h );
    quick_sort(arr,l,pivot-1);
    quick_sort(arr,pivot+1,h);
  }
  return 0 ; 
}

int partition(int arr[] , int l , int n)
{
  int pivot = arr[l];
  int i = l ; 
  int j = n;


  while(i<j){
    while(arr[i] <= pivot) i++; 
    while(arr[j] > pivot) j--;
    if(i<j){
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[j], arr[l]);
  print_array(arr,n);

  return j ; 
}
int main()
{
  int n = 6;
  int arr[n] = {10,9,2,7,3,5};  

  quick_sort(arr,0 ,n-1);
}