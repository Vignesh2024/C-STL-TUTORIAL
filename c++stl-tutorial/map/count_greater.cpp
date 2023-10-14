/*
 arr[] = {10,5,8,20,30,8}
 o/p:2 5 3 1 0 3
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int>v){
    vector<int>ans;
  for(int i=0;i<v.size();i++){
    int count =0;
    for(int j=0;j<v.size();j++){
        if(j!=i && v[j]>v[i]){
            count++;
        }
    }
     ans.push_back(count);
  }
  return ans;
   
}
int main(){
  vector<int>v ={10,5,8,20,30,8};
  vector<int>res;
  res = solve(v);
  for(int i = 0;i<res.size();i++){
    cout<<res[i]<<"\t";
  }
}