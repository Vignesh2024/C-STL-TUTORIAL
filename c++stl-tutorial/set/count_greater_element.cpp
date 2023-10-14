#include<bits/stdc++.h>
using namespace std;
void count_greater_element(vector<int>&v){
  for(int i = 0;i<v.size();i++){
    int count = 0;
    for(int j=0;j<v.size();j++){
        if(j!=i && v[j]>v[i])
        count++;
    }
    cout<<count<<"\n";
  }
}
int main(){
    vector<int>v = {8,3,10,40};
    count_greater_element(v);
}