#include<bits/stdc++.h>
using namespace std;
bool solve2(vector<int>v,int n){
    unordered_set<int>s;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum==0 or s.find(sum)!=s.end())
        return true;
        s.insert(sum);
    }
    return false;
}
bool solve(vector<int>v,int n){
    //TC:O(n^2),SC:O(1)
for(int i=0;i<n;i++){
    int sum = v[i];
    if(sum==0)return true;
    for(int j=i+1;j<n;j++){
     sum+=v[j];
    if(sum==0)
    return true;
    }
}
return false;
}
int main(){
    vector<int>v = {2,-1,-2,3,6,7};
    int n  = v.size();
    cout<<solve(v,n)<<"\n";
    cout<<solve2(v,n)<<"\n";
}