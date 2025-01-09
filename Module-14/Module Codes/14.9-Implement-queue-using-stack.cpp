class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st;
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st2;
        int val,x;
        while(!st.empty())
        {
            val=st.top();
            st.pop();
            if(st.empty()==true)
                break;
            st2.push(val);
        }
        while(!st2.empty())
        {
           st.push(st2.top());
           st2.pop();
        }
       
        return val;
    }
    
    int peek() {
        stack<int> st2;
        int val;
        while(!st.empty())
        {
            val=st.top();
            st.pop();
            st2.push(val);
        }
        while(!st2.empty())
        {
           st.push(st2.top());
           st2.pop();
        }
        return val;
    }
    
    bool empty() {
        return st.empty();
    }
};
int main()
{
    
}
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */