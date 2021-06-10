#include <bits/stdc++.h>
using namespace std;
struct rectangle
{
    int h;
    int w;
    rectangle(int a, int b)
    {
        h = a;
        w = b;
    }
};
bool cmp(rectangle r1,rectangle r2)
{
    return ((r1.h*r1.w)<(r2.h+r2.w));
}
int main()
{

    int n;
    cin >> n;
    vector<rectangle> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(rectangle(a, b));
    }
    sort(v.begin(),v.end(),cmp);
    cout<<endl;
    for(auto r:v){
        cout<<r.h<<" "<<r.w<<endl;
    }
}