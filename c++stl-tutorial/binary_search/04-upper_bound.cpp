#include<bits/stdc++.h>
using namespace std;
//return will first index value
int solve(int arr[],int n,int s){
    int l = 0,r = n-1;
    int ans = n;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]>s){
          ans  = mid;
        r = mid-1;
        }
        else{
         l = mid+1;
        }
      }
      return ans;
}
int main(){
    int s ;cin>>s;
    int arr[] = {12,12,4,6,7,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n,s)<<"\n";

}