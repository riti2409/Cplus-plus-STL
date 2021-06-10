 #include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
   return p1.second<p2.second;
}
int main(){
int n;
cin>>n;
vector<int>start;
vector<int>finish;
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    start.push_back(t);
}
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    finish.push_back(t);
}

vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    v.push_back(make_pair(start[i],finish[i]));
}
sort(v.begin(),v.end(),cmp);
int cnt=0,l=0;
for(int i=0;i<n;i++){
    if(v[i].first>=l){
        cnt++;
        l=v[i].second;
    }
}
cout<<cnt;
return 0;
}