#include<bits/stdc++.h>
using namespace std;
vector<int>fun(vector<int>&v){
    //The original vector will not modify use reference 
    v.push_back(40);
    v.push_back(50);
}
int main(){
    vector<int>v={10,20,30};
    fun(v);
    for(auto x:v){cout<<x<<"\n";}
}