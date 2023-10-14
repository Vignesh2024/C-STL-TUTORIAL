#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
    //for(auto x:v){...............}
    int arr[] = {10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    //arr-is start address in begin,arr+n-is end address
    vector<int>v(arr,arr+n);
    for(auto it = v.rbegin();it!=v.rend();it++){
        cout<<(*it)<<"\n";
    }

}
int main(){
/*for(int x:v){
    cout<<x<<"\n";
    reference will use to change the element for(int &x:v){
        ..............
    }
  }*/
 /* vector<int>v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);                       
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<"\n";
  }
  cout<<v.size()<<"\n";*/
  int n = 3,x=10;
  //vector<int>::iterator;
  vector<int>v1(n,x);
  for(auto it=v1.begin();it!=v1.end();it++){
    cout<<(*it)<<"\n";
  }
  solve();
}