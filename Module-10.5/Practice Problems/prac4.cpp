/*
Question: You have a doubly linked list which is empty initially. You need to take
a value Q which refers to queries. For each query you will be given X and V. You
will insert the value V to the Xth index of the doubly linked list and print the list in
both left to right and right to left. If the index is invalid then print “Invalid”.
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x<0 || x> l.size())
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            if(x==l.size())
            {
                l.push_back(v);
            }
            else if(x==0)
            {
                l.push_front(v);
            }
            else
            {
                l.insert(next(l.begin(),x),v);
            }
            for(auto it: l)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            l.reverse();
            for(auto it: l)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            l.reverse();
        }
        
        
    }
    return 0;
}