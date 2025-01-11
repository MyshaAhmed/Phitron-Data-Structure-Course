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
class myStack
{
    public:
    Node* head = NULL;
    Node* tail= NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL) 
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    
    }

    void pop()
    {
        sz--;
        Node* deleteNode =  tail;
        tail=tail->prev;
        delete deleteNode;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next=NULL;
    }
    
    int top()
    {
        return tail->val; 
    }
    int size()
    {
        return sz; 
    }
    bool empty()
    {
        return head==NULL; 
    }
};
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)
    {
        sz++;  
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

    void pop() 
    {
        sz--;  
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

    int front() 
    {
        return head->val;
    }
    int back() 
    {
        return tail->val;
    }

    int size()
    {
        return sz; 
    }

    bool empty()
    {
        return head==NULL; 
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag = true;
        while(!st.empty() &&!q.empty())
        {
            if(st.top()!=q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}