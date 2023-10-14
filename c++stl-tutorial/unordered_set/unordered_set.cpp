/*
1.any ordered will be printed
2.all the values insert into o(1) time complexity
3.insert,delete ,search - average o(1) time complexity
4.not allowed duplicate elements
*/

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<"\n";
    }
}
