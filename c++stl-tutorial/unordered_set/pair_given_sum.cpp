#include<bits/stdc++.h>
using namespace std;
bool solve1(int arr[],int n,int sum){
    /*1.create unordered_set .then check if element present are not check*/
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])==s.end()){
            return true;
        }else{
            s.insert(arr[i]);
        }
    }
    return false;

}
bool solve(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;cin>>n;
    int sum;cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n,sum)<<"\n";
}