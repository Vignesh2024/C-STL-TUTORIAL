#include<bits/stdc++.h>
using namespace std;
//solve 1 :create unordered_Set put the all element in set
// then one by one check present are not check
void solve(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++) {
       if(s.find(arr[i])==s.end()){
        s.insert(arr[i]);
       }else{
        cout<<arr[i]<<"\n";
       }
    }
}
void solve(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            bool flag = false;
            if(arr[i]==arr[j]){
                flag = true;
            }
            if(flag==true){
                cout<<arr[i]<<"\n";
            }
        }
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