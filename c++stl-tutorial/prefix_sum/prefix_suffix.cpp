#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>v,int n){
    vector<int>res(n);
    for(int i=0;i<n;i++){
    res[i] =abs(v[i]*v[i]);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
}
int main(){
    vector<int>v = {-4,-1,0,3,10};
    int n = v.size();
    solve(v,n);
}