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
    int t;
    cin>>t;
    while(t--)
    {
        Node* head=NULL;
        Node* tail=NULL;
        int size=0;
        while(1)
        {
            int val;
            cin>>val;
            if(val==-1)
            {
                break;
            }
            insert_at_tail(head,tail,val);
            size++;
        }
        int x;
        cin>>x;
        Node* temp=head;
        int flag=0,index=0;
        for(int i=0;i<size;i++)
        {
            if(temp->val==x)
            {
                flag=1;
                index=i;
                break;
            }
            else
            {
                temp=temp->next;
            }
        }
        if(flag==1)
        {
            cout<<index<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    
    return 0;
}