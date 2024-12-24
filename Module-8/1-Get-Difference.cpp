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
        insert_at_tail(head,tail,val);
    }
    Node* max=head;
    Node* min=head;
    // max->val=INT_MIN; 
    // min->val=INT_MAX; 
    for(Node* temp=head;temp!=NULL;temp=temp->next)
    {

        if(temp->val>max->val)
        {
            max=temp;
        }
        if(temp->val<min->val)
        {
            min=temp;
        }
    }
    if(head->next==NULL)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<max->val-min->val<<endl;
    }
    return 0;
}