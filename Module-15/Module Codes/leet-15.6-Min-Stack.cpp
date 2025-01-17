#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack<int> st, st_min;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(st_min.empty())
            st_min.push(val);
        else if(st_min.top()>=val)
            st_min.push(val);
    }
    
    void pop() {
        if(st.top()==st_min.top())
            st_min.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st_min.top();
    }
};

int main()
{
    
    return 0;
}