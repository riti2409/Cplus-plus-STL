//lifo manner
//push,pop ,top,empty,size
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    return 0;
}
