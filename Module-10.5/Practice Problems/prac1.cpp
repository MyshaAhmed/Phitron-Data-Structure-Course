//Question: Take two doubly linked lists as input and check if they are the same or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        l1.push_back(val);
    }
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        l2.push_back(val);
    }
    
    int flag=1;
    for (int i = 0; i < l1.size(); i++)
    {
        if(l1.size()!=l2.size())
        {
            flag=0;
            break;
        }
        
        if(l1.front()!=l2.front())
        {
            flag=0;
            break;
        }
        next(l1.begin(),i);
        next(l2.begin(),i);
    }
    
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}