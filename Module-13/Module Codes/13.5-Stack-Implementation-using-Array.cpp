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
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl; // 3

    cout<<st.top()<<endl; // 30
    st.pop();
    cout<<st.top()<<endl; // 20
    cout<<st.empty()<<endl; // 0
    st.pop();

    if(st.empty()==false)
        cout<<st.top()<<endl;
    if(!st.empty())
    {
       st.pop();
    }
    
    cout<<st.size()<<endl;

    return 0;
}