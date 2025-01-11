#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // last value access, use stack
        stack<char> st;
        for(auto c: s)
        {
            if(c=='#')
            {
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(c);
        }

        stack<char> st2;
        for(auto c: t)
        {
            if(c=='#')
            {
                if(!st2.empty())
                    st2.pop();
            }
            else
                st2.push(c);
        }
        return st==st2;
        /*
            if(st==st2)
                return true;
            else
                return false;
        */ 
    }
};
int main()
{
    
    return 0;
}