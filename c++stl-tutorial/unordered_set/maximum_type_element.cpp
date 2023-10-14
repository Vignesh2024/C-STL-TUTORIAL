#include<bits/stdc++.h>
using namespace std;
int  solve(int arr[],int n,int k){
  unordered_set<int>s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }
  int d = s.size();
  if(d>=n/k){
    return n/k;
  }
  else{
    return d;
  }
}
int main(){
    int k;cin>>k;
    int arr[]={1,1,2,3,1,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //for(int i=0;i<n;i++){
        //cin>>arr[i];
    //}
    cout<<solve(arr,n,k)<<"\n";
}