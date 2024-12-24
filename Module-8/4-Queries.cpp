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
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    if(tail==NULL)
    {
        tail=newNode;
    }
}

void delete_at_any_position(Node* &head,Node* &tail,int index)
{
    if(head==NULL)
    {
        return;
    }
    
    if(index==0)
    {
        Node* deletenode=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete deletenode;
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
    
    if(temp->next==NULL)
    {
        return;
    }

    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    if(temp->next==NULL)
    {
        tail=temp;
    }
    delete deleteNode;
}
void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp !=NULL)
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
            insert_at_head(head,tail,v);
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);
        }
        else
        {
            delete_at_any_position(head,tail,v);
        }
        print_linked_list(head);
    }
    
    return 0;
}