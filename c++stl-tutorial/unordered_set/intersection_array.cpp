#include<bits/stdc++.h>
using namespace std;
void solve(int arr1[],int arr2[],int n,int m){
    //tc:o(n+m),sc:o(n)
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr1[i])==s.end()){
            cout<<arr1[i]<<"\n";
        }
    }
}
void solve(int arr1[],int arr2[],int n,int m){
    //tc:o(n^2)
   for(int i=0;i<n;i++){
    bool flag = false;
    for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
            flag = true;
            break;
        }
    }
    if(flag==true){
        cout<<arr1[i]<<"\n";
    }
   
   }
}
int main(){
    int n,m;cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n&&i<m;i++){
        cin>>arr1[i]>>arr2[i];
    }
    solve(arr1,arr2,n,m);
}