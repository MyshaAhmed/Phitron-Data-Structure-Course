#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;   
    Node* prev;   
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val) // push a node to the queue, inserting at tail , complexity O(1)
    {
        sz++;  // increase the size of the queue by 1
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

    void pop() // pop a node from the queue, delete at head , complexity O(1)
    {
        sz--;  // decrease the size of the queue by 1
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }

    int front() // return the front element of the queue, complexity O(1)
    {
        return head->val;
    }
    int back() // return the last element of the queue, complexity O(1)
    {
        return tail->val;
    }

    int size()
    {
        return sz; // complexity O(1)
    }

    bool empty()
    {
        return head==NULL; // complexity O(1)
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