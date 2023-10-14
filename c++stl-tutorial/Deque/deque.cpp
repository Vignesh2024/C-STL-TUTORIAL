#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq={10,20,30};
    dq.push_front(5);
    dq.push_back(40);
    auto it = dq.begin();
    cout<<"------"<<"\n";
    cout<<*it++<<"\n";
    cout<<"----------"<<"\n";
    dq.insert(it,20);
    for(auto x:dq){
        cout<<x<<"\n";
    }
    cout<<dq.front()<<" "<<dq.back()<<"\n";

}