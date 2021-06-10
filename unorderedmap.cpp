//unorder map conatoins key and have hashing in internal implementation
//it takes o(1) time
// we can use inbuilt data type only no pair or user defined can be used
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
    m[arr[i]]++;
    }
    for(auto i:m){
        cout<<i.first<<"-> "<<i.second;
    }
    return 0;
}