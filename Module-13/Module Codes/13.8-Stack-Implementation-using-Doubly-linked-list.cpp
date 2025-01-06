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
            //---> insert at tail:  O(1)
            Node* newNode = new Node(val);
            if(head == NULL) // for empty stack
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
            //---> delete at tail: O(1)
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
            //--->top value is the tail value: O(1)
            return tail->val; 
        }
        int size()
        {
            return sz; //---> O(1)
        }
        bool empty()
        {
            return head==NULL; //---> O(1)
        }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    // input:
    /*
        5
        10 20 30 40 50

        Output:
        50 40 30 20 10 ---> LIFO tai ulta print hocche 
    */ 
    return 0;
}