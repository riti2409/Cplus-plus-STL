#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int> p2){
    return p1.first>p2.first;
}
int main()
{
    vector<pair<int, int>> v;
    v.push_back(make_pair(10, 23));
    v.push_back(make_pair(15, 13));
    v.push_back(make_pair(16, 31));
    v.push_back(make_pair(4, 5));
    v.push_back(make_pair(10, 4));
    sort(v.begin(), v.end());
    for (auto &x : v)
    {
        cout <<x.first<<"->"<<x.second<<" " ;
    }
    cout<<endl;
    sort(v.begin(), v.end(),cmp);
    for (auto &x : v)
    {
        cout << x.first<< "->"<<x.second<< " " ;
    }
    return 0;
}