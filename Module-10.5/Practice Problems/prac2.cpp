// Question: Take a doubly linked list as input and reverse it. After that print the linked list.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        l.push_back(val);
    }
    l.reverse();
    for(auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}