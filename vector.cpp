#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v1;
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(5);
    // for(auto &x:v1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<"size : "<<v1.size()<<" capacity : "<<v1.capacity();
    vector<int>v(5,1);
    if(v.empty()){
     cout<<"empty";
    }
    else{
        cout<<"not empty";
    }
    v.pop_back();
    for(auto &x:v){
        cout<<x<<" ";
    }
    vector<int>::iterator it=v.begin();
    while(it!=v.end()){
        cout<<(*it)<<endl;
        it++;
    }
    cout<<"next itr";
    vector<int>::reverse_iterator  it1= v.rbegin();
     while(it1!=v.rend()){
         cout<<(*it1)<<endl;
         it1++;
     }
    return 0;
}