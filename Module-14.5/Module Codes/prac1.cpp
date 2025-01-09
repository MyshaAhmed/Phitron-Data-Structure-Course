/*
Question: Take two stacks of size N and M as input and check if both of them are
the same or not. Don’t use STL stack to solve this problem.
*/ 
#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val); //---> O(1)
    }
    void pop()
    {
        v.pop_back(); //---> O(1)
    }
    int top()
    {
        return v.back(); //---> O(1)
    }
    int size()
    {
        return v.size(); //---> O(1)    
    }
    bool empty()
    {
        return v.empty(); //---> O(1)
    }
};
int main()
{
    myStack st,st2;
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }
    if(st.size()!=st2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        bool flag=true;
        while(!st.empty())
        {
            if(st.top()!=st2.top())
            {
                flag=false;
                break;
            }
            st.pop();
            st2.pop();
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}