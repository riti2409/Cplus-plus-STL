#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return abs(a)<abs(b);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
   for(int i=0;i<n;i++){
       int t;
       cin>>t;
       v.push_back(t);
   }
   sort(v.begin(),v.end(),cmp);
   for(auto &x:v){
       cout<<x<<" ";
   }
    return 0;
}