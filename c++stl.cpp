/*stl-> algorithms , container

algorithms-> binary search,upper bound,lower bound,search,swap,reverse,rotate etc

container-> 
sequence container- array,vector,deque,list,forwardlist
container adapter- stack,queue,priority queue
associative conatiner- set map multiset,multimap
unordered associative- unordered set,unordered map,unordered multiset,unordered multimap
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ARRAY-> similar typ data stored in continguous memeory
    //library= #include<array>
    array<int, 4> a = {1, 2, 3, 4}; //static array
    int size = a.size();
    //every operation is done in O(1)
    cout << "element at 2 index we can acess any element using at" << a.at(2) << endl;
    cout << "empty or not" << a.empty() << endl;
    cout << "first element of array" << a.front() << endl;
    cout << "last element of an array" << a.back() << endl;

    // VECTOR->dynamic array . increase its size double. makes a new vector of double size of old. old vector gets copied in new one . the old gets deleted
    //random acess is possible v[i]
    //library= #include<vector>

    vector<int> v;
    //size= total ements
    cout << "size" << v.size();
    //capacity=total size allocated for elements
    cout << "capacity" << v.capacity();
    //to insert elemnt
    v.push_back(1); //capacity 1 size =1
    v.push_back(2); //capacity 2 size=2
    v.push_back(3); //capacity 4 size=3

    cout << "first element of vector" << v.front() << endl;
    cout << "last element of an vector" << v.back() << endl;

    cout << "element at 2 index we can acess any element using at" << v.at(2) << endl;

    // to delete elements from back
    cout << "del element at last";
    v.pop_back();

    // clear is use to clear the elemnts . size becomes 0 but capacity remains the same
    v.clear();

    // for iterators
    auto it = v.begin();

    //initialisation
    //vector<datatype>vector_name(size of vector, intialise very elemnt with);
    vector<int> v1(5, 1);
    // to copy elemnts from other vectror
    vector<int> last(v);

    //DEQUE->insertion or deletion can be performed from both the ends front and rear
    // no contiguous memory allocation . fixed static arrays are used
    //it is dynamic in size
    //random acess available
    // library #include<deque>

    deque<int> d;
    d.push_back(10);
    d.push_front(2);

    //o/p= 2 10
    d.pop_back();
    d.pop_front();

    //at any given index

    cout << "first index element of deque" << d.at(1);

    cout << "first element of deque" << d.front() << endl;
    cout << "last element of an deque" << d.back() << endl;

    // to erase elements
    d.erase(d.begin(), d.begin() + 1); // O(n)

    // iterators
    auto it = d.begin();
    auto it1 = d.end();

    //LIST->use of doubly linked list(2 pointer prev and next)
    // no random acess
    // library - #include<list>
    list<int> l;
    //insertion
    l.push_front(2);
    l.push_back(1);
    //erase= O(n)
    l.erase(l.begin());

    //size
    cout << l.size();

    //printing of a list

    list<int> n(5, 100);
    cout << "Printing n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    //o/p= 100 100 100 100 100

    //STACK -> LIFO (last in first out)
    // library = #include<stack>
    stack<string> s;
    s.push("i");
    s.push("love");
    s.push("cats");
    //acessing the top element
    cout << "top element" << s.top();
    //deleting the top element
    s.pop();
    //size
    cout << s.size();
    //for empty
    cout << s.empty();

    //QUEUE -> FIFO (first in first out)
    // library = #include<queue>
    queue<string> q;
    q.push("i");
    q.push("love");
    q.push("cats");
    //acessing the top element
    cout << "first element" << q.front();
    //deleting the top element
    q.pop();
    //size
    cout << q.size();
    //for empty
    cout << q.empty();

    // PRIORITY QUEUE -> queue having the first element as greatest (max heap)
    //max heap= element fetched is maximum
    //min heap= element fetched is minimum

    //max heap
    priority_queue<int> maxi;

    //min heap

    priority_queue<int, vector<int>, greater<int>> mini;

    //how to push elements

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    // how to get o/p

    int n1 = maxi.size();

    for(int i=0; i < n1 ;i++){
        cout<<maxi.top();
        maxi.pop();
    }

  /*priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(3);
    maxi.push(2);
    maxi.push(8);

    int n=maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
*/
// o/p=3 2 1 0




//SET= all elements stored are unique
//Bst is used
// no modification
//we get elements in sorted order
//unordered_set=random way we gets the elemnts but in set in sorted order

set<int>s;
s.insert(2); //o(logn)
s.insert(9);
s.insert(8);
for(auto i:s){
    cout<<i<<endl;
    //o/p = 2 8 9
}
//find returns the iterator
set<int>::iterator it=s.find(2);
//iterator is needed in erase
s.erase(s.begin());
set<int>::iterator it=s.begin();
it++;

s.erase(it);

cout<<s.count(5); //element exsists or not
 




 //MAP- data is stored in the form of key value pair

 
    return 0;
}
