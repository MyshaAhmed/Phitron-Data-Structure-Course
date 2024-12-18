// Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
    
}
int check_duplicate(Node* &head)
{
    Node* temp=head;
    if(temp->val==temp->next->val)
    {
        return 1;
    }
    temp=temp->next;
    return 0;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val,flag=0;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    flag=check_duplicate(head);
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}