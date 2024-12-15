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
int main()
{
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c = new Node(40);

    head->next=a;
    a->next=b;
    b->next=c;
    Node* temp=head;
    
    // printing LL==================>
    
    /*
    while(head!=NULL)
    {
        cout<<head.val<<endl;
        head=head->next;
    }
    NOTE: we cant do this as it will change the value of head to NULL
          so we will declare a temporary node that will contain the value of head
    */ 

    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    // 2nd time printing=============>
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    return 0;
}