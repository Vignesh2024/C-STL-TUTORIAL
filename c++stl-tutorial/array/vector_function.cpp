#include<bits/stdc++.h>
using namespace std;
void solve2(){
  //resize function
  cout<<"-------------"<<"\n";
  vector<int>v = {10,20,30,40};
  v.resize(3);
  for(auto x:v){cout<<x<<"\n";}
  v.resize(5);
  for(auto x:v){cout<<x<<"\n";}
  v.resize(8,200);
  for(auto x:v){cout<<x<<"\n";}
}
void solve(){
    //erase,empty,clear..function
    cout<<"---------------"<<"\n";
     vector<int>v={10,20,30,40};
     v.erase(v.begin());
     for(auto x:v){cout<<x<<"\n";}
     v.erase(v.begin(),v.end()-1);
     cout<<v.size()<<"\n";
     cout<<"-------------"<<"\n";
     vector<int>v2={10,20,30};
     for(auto x1:v2){cout<<x1<<"\n";}
     v2.clear();
     cout<<v2.size()<<"\n";
     if(v2.empty()==true)
     cout<<"Empty"<<"\n";
     else
     cout<<"Not Empty"<<"\n";

}
int main(){
    vector<int>v={10,20,30};
    auto it  =v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);
    for(auto x:v){
        cout<<x<<"\n";
    }
    cout<<"front:"<<v.front()<<" "<<"back:"<<v.back()<<"\n";
    cout<<"--------------"<<"\n";
    vector<int>v2;
    v2.insert(v2.begin(),v.begin(),v.end());
    for(auto x1:v2){
        cout<<x1<<"\n";
        v2.pop_back();
    }
    cout<<v2.size()<<"\n";
    solve();
    solve2();

}