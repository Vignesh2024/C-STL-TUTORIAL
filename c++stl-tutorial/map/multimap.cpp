/*
1.sorted ordered will be print
2.duplicate keys will be allowed
*/

#include<bits/stdc++.h>
using  namespace std;
int main(){
    multimap<int,int>mp;
    mp.insert({3,100});
    mp.insert({2,200});
    mp.insert({3,300});
    cout<<mp.count(3)<<"\n";
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
}
