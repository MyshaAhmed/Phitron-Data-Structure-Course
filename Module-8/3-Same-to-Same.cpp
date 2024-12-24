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

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val,val2;
    int size1=0,size2=0;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
        size1++;
    }
    while(1)
    {
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val2);
        size2++;
    }
    Node* temp1=head;
    Node* temp2=head2;
    int flag=0;
    if(size1!=size2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<size1;i++)
    {
        if(temp1->val!=temp2->val)
        {
            flag=1;
            break;
        }
        else
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}