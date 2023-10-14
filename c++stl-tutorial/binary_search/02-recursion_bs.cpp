#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int l,int r,int s){
    if(l>r){
        return -1;
    }
    //this case will be working integer
    //int mid = (l+r)/2;
    //long long integer will work
    int mid = l+(r-l)/2;
    if(arr[mid]==s)
           return mid;
    else if(s>arr[mid])
           solve(arr,mid+1,r,s);
    else if(arr[mid]>s)
           solve(arr,l,mid-1,s);
}
int main(){
    int s = 12;
    int arr[] = {12,34,56,78,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0,r = n-1;
    cout<<solve(arr,l,r,s)<<"\n";
}
