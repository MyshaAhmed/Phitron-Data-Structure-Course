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
void reverse_doubly_linked_list(Node* &head, Node* &tail)
{
    for (Node* i = head,*j=tail; i!=j && i->prev!=j; i=i->next,j=j->prev)
    {
        swap(i->val, j->val);
    }
    
}
// void print_forward(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_into_tail(head,tail,val);
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        insert_into_tail(head2,tail2,tmp->val);
        tmp=tmp->next;
    }
    reverse_doubly_linked_list(head2,tail2);
    // print_forward(head);
    // print_forward(head2);
    
    int flag=0;
    for(Node* i=head, *j=head2; i!=NULL && j!=NULL; i=i->next, j=j->next)
    {
        if(i->val!=j->val)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}