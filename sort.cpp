#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    v.push_back(make_pair(10, 23));
    v.push_back(make_pair(15, 13));
    v.push_back(make_pair(16, 31));
    v.push_back(make_pair(4, 5));
    v.push_back(make_pair(10, 4));
    // v.push_back(10);
    // v.push_back(25);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(39);
    // v.push_back(-1);
    // v.push_back(-3);
    sort(v.begin(), v.end(),greater<pair<int,int>>());
    for (auto &x : v)
    {
        cout << x.first<< " "<<x.second<< ":" ;
    }
    return 0;
}