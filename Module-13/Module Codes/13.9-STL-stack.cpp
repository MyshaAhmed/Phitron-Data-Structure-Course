#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    // input:
    /*
        5
        10 20 30 40 50

        Output:
        50 40 30 20 10 ---> LIFO tai ulta print hocche 
    */ 
    return 0;
}