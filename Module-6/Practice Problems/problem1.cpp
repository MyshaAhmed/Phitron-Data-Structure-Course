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
    Node* newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void insert_at_head(Node* &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_at_any_pos(Node* &head,int index,int val)
{
    Node* newnode= new Node(val);
    Node* temp= head;
    for (int i = 1; i < index; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val, count=0;
    while(1)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
        count++;
    }
    cout << "Linked List: ";
    print_linked_list(head);
    cout<<"count: "<<count<<endl;
    cout <<"tail:"<<tail->val<< endl;

    cout <<"insert at tail :"<<endl;
    insert_at_tail(head,tail,6);
    print_linked_list(head);

    cout <<"insert at head :"<<endl;
    insert_at_head(head,100);
    print_linked_list(head);

    cout <<"insert at any position :"<<endl;
    insert_at_any_pos(head,2,500);
    print_linked_list(head);
    return 0;
}