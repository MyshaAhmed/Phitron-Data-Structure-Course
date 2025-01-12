//****************************************************************

   // Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


//*****************************************************************/

class Stack
{

public:
    Node* head=NULL;
    int sz=0;
    Stack()
    {
        
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head==NULL;
    }

    void push(int data)
    {
       Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        sz++;
    }

    void pop()
    {
        if(head==NULL)
        {
            return;
        }
        Node* deletenode=head;
        head = head->next;
        delete deletenode;  
        sz--; 
    
    }

    int getTop()
    {
        if(head==NULL)
            return -1;
        else
            return head->data;
    }
};
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}