#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[10]={1,2,3,3,4,4,5,6,7,9};
    int n;
    cin>>n;
    auto it=lower_bound(arr,arr+11,3)-arr;
    
    
    auto it4=upper_bound(arr,arr+11,3)-arr;
    cout<<(it4-it)<<endl;
}