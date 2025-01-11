/*
[{()}]====> is it valid? yes

[{)] ====> is it valid? No

strategy: we will push opening bracket in stack until we find a closing bracket,
----------
# when we find a closing bracket, we will check the top of the stack to see 
    if the closing bracket matches the same type as the opening brackets
# if all of the string matches, the stack will be empty, then the string is valid
# if the stack is not empty, then the string is invalid

edge case: 
-----------

1) opening bracket ====>  push opening bracket in stack
----> push()

2) closing bracket ====> 
---> st.empty() ----> invalid 
---> if not empty---> match
---> if match---> pop()
---> if not match---> invalid

# ]() if there is no opening bracket at first, and a closing bracket is placed at first
# then stack is empty, and closing bracket is invalid

WHICH DS TO USE?
================
---> as we are accessing the last element every time, stack will be more appropriate DS to solve parentheses problems

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch: s)
        {
            if(ch=='('||ch=='{'||ch=='[')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())
                    return false;
                else
                {
                    if(st.top()=='('&& ch==')')
                        st.pop();
                    else if(st.top()=='{'&& ch=='}')
                        st.pop();
                    else if(st.top()=='['&& ch==']')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
int main()
{
    
    return 0;
}