#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<" "<<q.back()<<"\n";
    q.pop();
    cout<<q.front()<<" "<<q.back()<<"\n";
    while(q.empty()==false){
        cout<<q.front()<<" "<<q.back()<<"\n";
        q.pop();
    }
}