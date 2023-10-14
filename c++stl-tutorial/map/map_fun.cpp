#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    mp.insert({1,100});
    mp.insert({2,200});
    mp.insert({3,300});
    auto it = mp.lower_bound(2);
    if(it!=mp.end()){
        cout<<(*it).first<<"\n";
    }
    else{
        cout<<"Not Equal or Greater Value"<<"\n";
    }
    //upper_bound
    map<int,int>m;
    m.insert({4,400});
    m.insert({5,500});
    m.insert({6,600});
    auto it1 = m.upper_bound(3);
    if(it1!=m.end()){
        cout<<(*it1).first<<"\n";
    }
    else{
        cout<<"No Greater Value"<<"\n";
    }
}