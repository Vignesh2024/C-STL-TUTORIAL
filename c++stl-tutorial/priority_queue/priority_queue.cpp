#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,20,30};
    priority_queue<int>q1(arr,arr+3);
     cout<<q1.top()<<"\n";
    while(q1.empty()==false){
        cout<<q1.top()<<"\n";
        q1.pop();
    }    

    //max heap
   /*priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.size()<<"\n";
    cout<<pq.top()<<"\n";
    while(pq.empty()==false){
    cout<<pq.top()<<"\n";
    pq.pop();
    }*/
    //min heap
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size()<<"\n";
    cout<<q.top()<<"\n";
    while(q.empty()==false){
        cout<<q.top()<<"\n";
        q.pop();
    }
}