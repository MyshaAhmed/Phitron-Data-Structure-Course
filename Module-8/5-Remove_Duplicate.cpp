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

void remove_duplicate(Node* &head)
{
    for(Node* i=head; i!=NULL; i=i->next)
    {
        Node* prev=i;
        Node* j=i->next;
        while(j!=NULL)
        {
            if(i->val==j->val)
            {
                prev->next=j->next;
                Node* deleteNode=j;
                j=j->next;
                delete deleteNode;
            }
            else
            {
                prev=j;
                j=j->next;
            }
        }
    }
}
    // for(Node* i=head; i->next!=NULL; i=i->next)
    // {
    //     for(Node* j=i->next; j!=NULL; )
    //     {
    //         if(i->val==j->val)
    //         {
    //             Node* deleteNode=j;
    //             i->next=j->next;
    //             j=j->next;
    //             delete deleteNode;

    //         }
    //     }
    // }

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
    // sort_linked_list(head);
    remove_duplicate(head);
    print_linked_list(head);
    

    return 0;
}