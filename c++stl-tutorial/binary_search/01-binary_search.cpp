#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int k){
  int i = 0,j = n-1;
  while(i<=j){
    int mid = i+(j-i)/2;
    if(k<arr[mid])
      j = mid-1;
    else if(arr[mid]<k)
     i = mid+1;
    else
    //if(k==arr[mid])
       return mid;
  }
  return -1;
}
int main(){
    int k;cin>>k;
    int arr[] = {12,12,34,56,78,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n,k)<<"\n";
}