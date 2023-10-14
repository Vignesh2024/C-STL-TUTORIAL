#include<bits/stdc++.h>
using namespace std;
int solve2(vector<int>&v,int n){
 int sum = 0; // initialize sum of whole array
    int left_sum = 0; // initialize leftsum
 
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i)
        sum += v[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= v[i]; // sum is now right sum for index i
 
        if (left_sum == sum)
            return i;
 
        left_sum += v[i];
    }

    return -1;
}
int solve(vector<int>&v,int n){
    int left_sum,right_sum;
    for(int i=0;i<n;i++){
        //calculate left sum
        left_sum = 0;
        for(int j=0;j<i;j++)
            left_sum += v[j];
        right_sum = 0;
        for(int j=i+1;j<n;j++)
            right_sum+=v[j];
        if(left_sum==right_sum)
        return i;
    }
    return -1;
}
int main(){
    vector<int>v = {-7, 1, 5, 2, -4, 3, 0};
    int n = v.size();
    cout<<solve(v,n)<<"\n";
    cout<<solve2(v,n)<<"\n";
}