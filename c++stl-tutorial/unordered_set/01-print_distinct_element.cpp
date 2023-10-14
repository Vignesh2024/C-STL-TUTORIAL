#include<bits/stdc++.h>
using namespace std;
//tc:o(n^2) sc:o(1)
void solve2(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            cout<<arr[i]<<"\n";
            s.insert(arr[i]);
        }
    }
}
void solve1(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            bool flag = false;
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
            if(flag == false){
                cout<<arr[i]<<"\n";
            }
        }
    
    }
    
}
void solve(int arr[],int n){
    unordered_set<int>s(arr,arr+n);
    for(auto ans:s){
        cout<<ans<<"\n";
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
}