#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,30,40,50,10,40,10,50,30};
//  l.remove()----> removes all the mentioned value from the list  
    l.remove(10);
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

//  l.sort()----> sorts the elements in ascending order
    l.sort();
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
//  l.sort(greater<int>())----> sorts the elements in descending order
    l.sort(greater<int>());
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
//  l.unique()----> removes all adjacent duplicate values from the list
    l.unique();
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
// l.reverse()----> reverse the list
    list<int> l2={30,40,50,70};
    l2.reverse();
    for(auto i:l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}