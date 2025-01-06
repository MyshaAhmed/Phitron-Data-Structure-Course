#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
        // 1
        void push(int val)
        {
            v.push_back(val); //---> O(1)
        }
        // 2
        void pop()
        {
            v.pop_back(); //---> O(1)
        }
        // 3
        int top()
        {
            return v.back(); //---> O(1)
        }
        // 4
        int size()
        {
            return v.size(); //---> O(1)
        }
        // 5
        bool isEmpty()
        {
            return v.empty(); //---> O(1)
        }
};
int main()
{
    
    return 0;
}