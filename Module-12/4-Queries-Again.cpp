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

void insert_into_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode; 
        tail=newnode;
        return; 
    }
    tail->next=newnode; 
    newnode->prev=tail;
    tail=newnode;
}
void insert_into_head(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode; 
        tail=newnode;
        return; 
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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

int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void print_forward(Node* head)
{
    Node* temp=head;
    cout<<"L -> ";
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
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
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
        if(x<0 || x>size(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else if(x==0)
        {
            insert_into_head(head,tail,v);
        }
        else if(x==size(head))
        {
            insert_into_tail(head,tail,v);
        }
        else
        {
            insert_at_any_position(head,x,v);
        }
        print_forward(head);
        print_backward(tail);
    }
    
    return 0;
}