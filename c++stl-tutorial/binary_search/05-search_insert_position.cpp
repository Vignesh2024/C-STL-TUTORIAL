#include<bits/stdc++.h>
using namespace std;
//return will first index value
int solve(vector<int>&arr,int s){
    int n = arr.size();
    int l = 0,r = n-1;
    int ans = n;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>=s){
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
    vector<int>arr = {1,3,4,7};
    //int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,s)<<"\n";

}