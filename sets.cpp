//an associative container
//every elemnt is unique
//elemnts are stored in sorted order
//all opertn can be done in logn time
//it uses tree
//tree->red black tree(height can be h and h+1)(less frestricted)
//element address else end address
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>s;
    //set<int>s(arr,arr+n);

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int t;
    cin>>t;
    s.erase(t);
    int k;
    cin>>k;
    auto it1=s.find(k);
    cout<<*it1<<endl;
    cout<<"set is";
    for(auto it:s){
        cout<<it<<endl;
    }
}