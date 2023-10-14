#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(auto it = s.begin();it!=s.end();it++){
        cout<<(*it)<<"\n";
    }
    auto it = s.find(10);
    if(it==s.end()){
        cout<<"Not found"<<"\n";
    }
    else{
        cout<<"Found"<<"\n";
    }
    if(s.count(20))
    cout<<"Found"<<"\n";
    else
    cout<<"Not Found"<<"\n";
    //erase function
    for(auto x:s)cout<<x<<"\n";
}