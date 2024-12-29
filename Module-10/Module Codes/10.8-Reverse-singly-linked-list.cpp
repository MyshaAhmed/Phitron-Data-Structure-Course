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

void reverse_linked_list(Node* &head,Node* &tail,Node* temp)
{
    if(temp->next==NULL)
    {
        head=temp;
        return;
    }
    reverse_linked_list(head,tail,temp->next);
    // code of reverse_linked_list:
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;

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
    print_linked_list(head);
    cout<<head->val<<endl;
    cout<<head->next->val<<endl;

    reverse_linked_list(head,tail,head);
    cout<<"after reverse:"<<endl;
    print_linked_list(head);
    cout<<head->val<<endl;
    cout<<head->next->val<<endl;

    return 0;

    // input: 10 20 30 40 50 -1
}