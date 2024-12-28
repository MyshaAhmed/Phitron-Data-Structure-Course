#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* list assignment ===>
       2 ways: assignment---->  
       ========================
        1) direct aasignment: l1=l2;  
        2) using assignment operator: l2.assign(l1.begin(), l1.end());
    */


//  1. Direct assignment:
   list<int> l1={10,20,30};
   list<int> l2;
   l2=l1;
   for(auto val: l2)
   {
        cout<<val<<" ";
   }
   cout<<endl;

//  2.using assignment operator:
    list<int> l3;
   l3.assign(l1.begin(), l1.end());
   for(auto val: l3)
   {
        cout<<val<<" ";
   }
   cout<<endl;


// insert at tail:----> list.push_back(value)
    l1.push_back(40);
    for(auto val: l1)
    {
        cout<<val<<" ";
    }
    cout<<endl;

// insert at head:----> list.push_front(value)
    l1.push_front(100);
    for(auto val: l1)
    {
        cout<<val<<" ";
    }
    cout<<endl;

// delete at tail:----> list.pop_back(value)
    l1.pop_back();
    for(auto val: l1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
// delete at head:----> list.pop_front(value)
    l1.pop_front();
    for(auto val: l1)
    {
        cout<<val<<" ";
    }
    cout<<endl;

// insert at any position:----> list.insert(position, value)

    list<int> l4={1,2,3,4,6,7,8,9};
    cout<<*next(l4.begin(),4)<<endl; // next is a pointer SO, we need to dereference it to get the value
    l4.insert(next(l4.begin(),4),5);
    for(auto val: l4)
    {
        cout<<val<<" ";
    }
    cout<<endl;
// insert multiple value at any position:----> list.insert(position, value)

    list<int> l5={10,20,40,50};
    cout<<*next(l4.begin(),4)<<endl; // next is a pointer SO, we need to dereference it to get the value
    l5.insert(next(l5.begin(),2),l4.begin(),l4.end());
    for(auto val: l5)
    {
        cout<<val<<" ";
    }
    cout<<endl;

// list.erase() : deletes value at specific position
    
// single value erase:----> list.erase(position)
    l5.erase(next(l5.begin(),2));
    for(auto val: l5)
    {
        cout<<val<<" ";
    }
    cout<<endl;
// multiple value erase:----> list.erase(position,position)
    list<int> l6={10,20,30,40,50,60,70};
    l6.erase(next(l6.begin(),2),next(l6.begin(),5));
    for(auto val: l6)
    {
        cout<<val<<" ";
    }
    cout<<endl;

// replace(): not under list
    list<int> l7={10,20,20,20,50};
    replace(l7.begin(),l7.end(),20,100);
    for(auto val: l7)
    {
        cout<<val<<" ";
    }
    cout<<endl;

//  find(): not under list
    auto it=find(l7.begin(),l7.end(),20);
    if(it==l7.end())
    {
        cout<<"Not found!"<<endl;
    }
    else
    {
        cout<<"Found at index: "<<distance(l7.begin(),it)<<endl;
    }
    auto it2=find(l7.begin(),l7.end(),100);
    if(it2==l7.end())
    {
        cout<<"Not found!"<<endl;
    }
    else
    {
        cout<<"Found at index: "<<distance(l7.begin(),it2)<<endl;
    }

    return 0;
}