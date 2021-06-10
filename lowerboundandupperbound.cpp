//this works on sorted array or vector
// lower_bound(start,end,element)->it returns the occurence of 1st elemnt if not the greater elemnt present if not the end+1
// upper_bound(start,end,element)->strictly greater element only if not end is
//compleity-o(logn)
//returns address
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[10]={1,2,3,4,5,5,8,10,15,23};
    auto it=lower_bound(arr,arr+10,5)-arr;
    cout<<(it)<<endl;
    auto it1=lower_bound(arr,arr+10,7)-arr;
    cout<<(it1)<<endl;
    auto it2=lower_bound(arr,arr+10,24)-arr;
    cout<<(it2)<<endl;
    auto it4=upper_bound(arr,arr+10,6)-arr;
    cout<<(it4)<<endl;
}