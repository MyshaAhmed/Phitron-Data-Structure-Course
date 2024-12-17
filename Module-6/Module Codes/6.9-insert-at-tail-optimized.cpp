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

    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* tail = new Node(40);

    // for corner case----->
    // Node* head= NULL;

    head->next=a;
    a->next=b;
    b->next=tail;

    insert_at_tail(head,tail,100);
    print_linked_list(head);
    cout<<"tail: "<<tail->val<<endl;

    insert_at_tail(head,tail,200);
    print_linked_list(head);
    cout<<"tail: "<<tail->val<<endl;

    insert_at_tail(head,tail,300);
    print_linked_list(head);
    cout<<"tail: "<<tail->val<<endl;

    insert_at_tail(head,tail,400);
    print_linked_list(head);
    cout<<"tail: "<<tail->val<<endl;
    return 0;
}