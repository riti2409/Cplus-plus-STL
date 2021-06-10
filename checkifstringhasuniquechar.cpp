#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>s1;
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    } 
    if(s.length()==s1.size()) 
    {cout<<"true";}
    else{
        cout<<"false";
    }
    return 0;
}

