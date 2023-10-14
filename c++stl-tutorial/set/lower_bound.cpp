#include<bits/stdc++.h>
using namespace std;
void solve(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    auto it = s.upper_bound(20);
    if(it!=s.end()){
        cout<<(*it)<<"\n";
    }
    else{
        cout<<"Given element is greater then greater"<<"\n";
    } 
}
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    auto it = s.lower_bound(4);
    if(it!=s.end()){
        cout<<(*it)<<"\n";
    }
    else{
        cout<<"Given element is greater then greater"<<"\n";
    }
    solve();
}