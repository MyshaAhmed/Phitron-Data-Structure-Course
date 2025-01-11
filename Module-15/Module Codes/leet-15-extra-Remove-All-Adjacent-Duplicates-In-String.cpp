class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto c:s)
        {
            if(!st.empty())
            {
                if(st.top()==c)
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        // s.clear();
        string result;
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};