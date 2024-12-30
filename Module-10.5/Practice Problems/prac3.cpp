// Question: Take a doubly linked list as input and check if it forms any palindrome or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
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
    list<int> l2(l1);
    l2.reverse();
    if(l2==l1)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    return 0;
}