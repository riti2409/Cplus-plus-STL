//it is an associative container
//it store key value pair
//key will be unique
//it store key in sorted order
//basic functions are generally used on key 
//empty(),insert(),find(),size(),count(),erase(),begin(),end(),clear(),lower_bound(),upper_bound
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    m.insert(make_pair("xyz",789));
    m.insert({"abc",123});
    m["pqr"]=456;
    for(auto it :m){
        cout<<it.first<<" "<<it.second;
    }
    
    return 0;
}