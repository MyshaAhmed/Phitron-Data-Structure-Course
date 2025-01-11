#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        stack<int> st;
        for(auto ch:str)
        {
            if(ch=='1')
            {
                if(!st.empty()&&st.top()=='0')
                    st.pop();
                else
                    st.push(ch);
            }
            else if(ch=='0')
            {
                st.push(ch);
            }

        }
        if(st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}