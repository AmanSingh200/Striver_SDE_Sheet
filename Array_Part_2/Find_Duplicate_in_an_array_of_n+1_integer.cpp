#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    unordered_map<int,int> st;
    for (int i=0;i<n;i++){
        st[arr[i]]++;
    }
    int ans=0;
    for (auto x:st){
        if (x.second>1)
            ans=x.first;
    }
    cout<<ans<<" ";

}