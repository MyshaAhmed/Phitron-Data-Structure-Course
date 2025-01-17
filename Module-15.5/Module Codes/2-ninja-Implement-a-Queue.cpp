#include <bits/stdc++.h> 
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;    
    }
};
class Queue {
public:
    Node* head;
    Node* tail;
    Queue() {
        head=NULL;
        tail=NULL;
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return head==NULL;
    }

    void enqueue(int data) { //push
        // insert at tail====>
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
        // Implement the enqueue() function
    }

    int dequeue() {
        // delete from head====>
        Node* deletenode=head;
        if(head==NULL)
        {
            return -1;
        }
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        return deletenode->val;
        // Implement the dequeue() function
    }

    int front() {
        if(head==NULL)
            return -1;
        return head->val;
        // Implement the front() function
    }
};