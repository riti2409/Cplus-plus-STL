#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]=m[arr[i]]+1; //m[arr[i]]++
    }
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}

//O(n)=nlogn