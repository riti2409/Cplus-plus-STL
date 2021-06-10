//deque is sequence conatiner with insertion n deletion on both ends
//functions- pushback,pushfront,popback,popfront,size,at()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque <int> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);
    q.push_back(50);
    while(!q.empty()){
        cout<<q.front()<<' ';
    q.pop_front();
    }
    return 0;
}
