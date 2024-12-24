#include <bits/stdc++.h>
using namespace std;
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
// insertion ==================================================>
void insert_at_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
void insert_at_any_position(Node* &head,int index,int val)
{
    Node* newNode=new Node(val);
    Node* temp=head;
    // traverse till the requied position is next position
    for(int i=1;i<index;i++)
    {
        temp=temp->next;
    }
    // 1st connect new node to the end node
    newNode->next=temp->next;
    // 2nd connect new node to the current node
    temp->next=newNode;
}

void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newNode=new Node(val);
    // corner case where head is NULL----->
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode; // current tail is newnode, tail will not be updated if we dont update tail to newnode
}

// deletion ==================================================>
void delete_at_head(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}

void delete_at_any_position(Node* &head, int index)
{
    if(head==NULL || index<0)
    {
        return;
    }
    Node* temp=head;
    for(int i=1;i<index;i++)
    {
        if(temp->next==NULL)
        {
            return;
        }
        temp=temp->next;
    }
    
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node* &head,Node* &tail, int index)
{
    if(head==NULL || index<0)
    {
        return;
    }
    Node* temp=head;
    for(int i=1;i<index;i++)
    {
        if(temp->next==NULL)
        {
            return;
        }
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    tail=temp;
}

int size_of_linked_list(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    
    return count;  
}
void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        
        if(x==0)
        {
            insert_at_head(head,v);
            if(tail==NULL)
            {
                tail=head;
            }
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);
        }
        else if(x==2)
        {
            int size=size_of_linked_list(head);
            if(v>=size)
            {
                print_linked_list(head);
                continue; 
            }
            else if(v==0)
            {
                delete_at_head(head);
                if(head==NULL)
                {
                    tail=NULL;
                }
            }
            else if(v==size-1)
            {
                delete_at_tail(head,tail,v);  
            }
            else
            {
                delete_at_any_position(head,v);
            }
        }
        print_linked_list(head);
        
    }
    return 0;
}