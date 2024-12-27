#include <bits/stdc++.h>
#include <list> 
using namespace std;
int main()
{
    // declaration:=====>
    list<int> l;
    cout<<l.size()<<endl; // size of Doubly linked list will be 0

    list<int> l1(5);  
    cout<<l1.size()<<endl;  // size of Doubly linked list will be 5
     
    list<int> l2(10,3);
    cout<<l2.size()<<endl; // size of Doubly linked list will be 10, and value will be 3 of each node

    // printing doubly linked list=====>
    for(auto it=l2.begin(); it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // printing doubly linked list using range based for loop=====>  
    // # we will be using range based for loop mostly beause LL does not need indexing
    for(auto val:l2)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //copying 1 linked list to another======>
    list<int> l3(l2);
    for(auto val:l3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    //copying array to a doubly linked list ======>
    int arr[]={1,2,3,4,5};
    list<int> l4(arr,arr+5);
    for(auto val:l4)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //copying vector to a doubly linked list ======>
    vector<int> v={10,20,40};
    list<int> l5(v.begin(),v.end());
    for(auto val:l5)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    

    return 0;
}