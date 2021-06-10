#include<bits/stdc++.h>
using namespace std;
int main(){
//     pair<int,int> p1;

//     p1.first=2;
//     p1.second=3;
//  cout<<p1.first<<" "<<p1.second<<endl;

//  pair<int,int> p2(3,4);
//  cout<<p2.first<<" "<<p2.second<<endl;

//  pair <int,int>p3;
//  p3=make_pair(4,5);
//   cout<<p3.first<<" "<<p3.second<<endl;
vector<pair<string,int> > v;
for(int i=0;i<3;i++){
    string s;
    int n;
    cin>>s>>n;
    v.push_back(make_pair(s,n));
}
cout<<endl;
for(auto it= v.begin();it!= v.end();it++){
 cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}