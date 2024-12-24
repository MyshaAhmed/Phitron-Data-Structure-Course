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
    /*                                      __________________
                                            |  N | VAL  | N  |
                                            |____|______|____|                                                                 

    */ 
};
// Doubly linked List insertion======================================>
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insert_at_any_position(Node* &head,int idx,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;
}

// Doubly linked List deletion======================================>
void delete_at_head(Node* &head, Node* &tail)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    // corner case, if we have only one node and we want to delete that node, we also have to set the tail to null as the tail is pointing to the node we want to delete
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_at_tail(Node* &head, Node* &tail)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    // corner case, if we have only one node and we want to delete that node, we also have to set the head to null as the head is pointing to the node we want to delete
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void print_forward(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_backward(Node* tail)
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{   
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* tail= new Node(30);
    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;

    print_forward(head);
    delete_at_tail(head,tail);
    print_forward(head);
    delete_at_tail(head,tail);
    print_forward(head);
    delete_at_tail(head,tail);
    print_forward(head);
    return 0;
}