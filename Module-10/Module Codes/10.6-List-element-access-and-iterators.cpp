#include <bits/stdc++.h>
using namespace std;
int main()
{
    
//  List Element access:=================>

//  Accessing the first/head element:----->
    list<int> l = {1, 2, 3, 4, 5};
    cout << l.front() << endl; // Output: 1

//  Accessing the last/tail element:----->
    cout << l.back() << endl; // Output: 5

//  Accessing an element at a specific index except the front and back elements:----->
    cout<<*next(l.begin(),2)<<endl; // Output: 3


//  Iterators:===========================>
    cout<<*l.begin()<<endl; // Output:1  ----> equivalent to l.front()
    cout<<*l.end()<<endl; // Output:NULL ----> equivalent to l.back() but we will use l.back() instead because l.end() points to the element after the last element
    cout<<l.back()<<endl; // Output:5
    return 0;
}