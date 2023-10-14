/*
1.map<key,value>mp
2.descressing order will print
3.not duplicate will be allowed
4.sorted ordered in always in map
insert,find,erase,count-o(log n)
remaining all -o(1)
*/
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
  map<int,int>mp;
  mp.insert({10,200});
  mp[5] = 100;
  mp.insert ({1,200});
  //mp.at(20) = 200;
  for(auto x:mp){
    cout<<x.first<<" "<<x.second<<"\n";
  }
  cout<<mp.size()<<"\n";
  map<int,int>m;
  m.insert({1,100});
  m.insert({2,200});
  m.insert({3,300});
  //iterator
  for(auto it = m.begin();it!=m.end();it++){
    cout<<"Key:"<<(*it).first<<" "<<"Value:"<<(*it).second<<"\n";
  }
  //find function use present or check in the element
  if(m.find(3)!=m.end()){
    cout<<"Found"<<"\n";
  }
  else{
    cout<<"Not found"<<"\n";
  }
 //for find use print the element 
 for(auto it = m.find(2);it!=m.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<"\n";
 } 
 //if(m.found(3)!=0)
 if(m.count(3)==0){
    cout<<"Not Found"<<"\n";
 }
 else{
    cout<<"Found"<<"\n";
 }

}