#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    // vector<vector<int >>v(n,vector<int>(m));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //  cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    for (auto v1 : v)
    {
        for (auto x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}