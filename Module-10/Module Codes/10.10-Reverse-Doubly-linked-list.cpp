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
// Doubly linked List insertion ======================================>
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

// Doubly linked List deletion ======================================>
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
void delete_at_any_position(Node* head, int idx)
{
    Node* tmp=head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
//Printing Doubly linked List ======================================>
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

void reverse_doubly_linked_list(Node*head, Node*tail)
{
    for (Node* i = head,*j=tail; i!=j && i->prev!=j; i=i->next,j=j->prev)
    {
        swap(i->val, j->val);
    }
    
}
int main()
{   
    Node* head= NULL;
    Node* tail= NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    cout<<"Before reverse:"<<endl;
    print_forward(head);
    cout<<head->val<<endl;
    cout<<head->next->val<<endl;

    reverse_doubly_linked_list(head,tail);
    cout<<"after reverse:"<<endl;
    print_forward(head);
    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    return 0;
    
    //// input: 10 20 30 40 50 -1
}