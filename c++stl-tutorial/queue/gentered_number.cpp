/*
 given number {5,6} generate the number 
 input:10
 output:5,6,55,56,65,66,555,556,565
*/
#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(int n){
queue<string>q;
    q.push("5");
    q.push("6");
    for(int count = 0;count<n;count++){
       string curr  = q.front();
       cout<<curr<<"\n";
       q.pop();
       q.push(curr+"5");
       q.push(curr+"6");
    }
}
int main(){
    int n = 10;
    solve(n);
}
