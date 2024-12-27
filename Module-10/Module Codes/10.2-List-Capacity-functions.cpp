#include <bits/stdc++.h>
#include <list> 
using namespace std;
int main()
{
    // list.size():=====>
    list<int> l;
    cout<<l.size()<<endl; // size of Doubly linked list will be 0

    // list.max_size():=====>
    cout<<l.max_size()<<endl;  // compiler list size limit
     
    //  list.clear():=====>
    list<int> l2(10,3);
    l2.clear(); 
    cout<<l2.size()<<endl;  // size of Doubly linked list will be 0

    //  list.empty():=====>
    if(l2.empty())
    {
        cout<<"list.empty"<<endl; // empty list
    }
    
    //  list.resize():=====>
    list<int> l3={1,2,3,4,5,6,7,8,9};
    l3.resize(15);
    for(auto val:l3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //  list.resize():=====>
    l3.resize(5);
    for(auto val:l3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //  list.resize():=====>
    l3.resize(10,100);
    for(auto val:l3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
   
    return 0;
}