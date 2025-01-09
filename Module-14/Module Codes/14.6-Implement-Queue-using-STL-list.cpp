#include <bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
    list<int> l;
    int sz=0;

    void push(int val) // push a node to the queue, inserting at tail , complexity O(1)
    {
        sz++;  // increase the size of the queue by 1
        l.push_back(val);
    }

    void pop() // pop a node from the queue, delete at head , complexity O(1)
    {
        sz--;  // decrease the size of the queue by 1
        l.pop_front();
    }

    int front() // return the front element of the queue, complexity O(1)
    {
        return l.front(); 
    }
    int back() // return the last element of the queue, complexity O(1)
    {
        return l.back(); 
    }

    int size()
    {
        return sz; // complexity O(1)
    }

    bool empty()
    {
        return l.empty(); // complexity O(1)
    }
};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
    /*
        input:
        5
        10,20,30,40,50
    */ 
}