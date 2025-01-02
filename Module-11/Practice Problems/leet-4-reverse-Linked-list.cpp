// question:  Reverse Linked List
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(ListNode* &head,ListNode* tmp)
    {
        while(tmp->next==NULL)
        {
            head=tmp;
            return;
        }
        reverse(head,tmp->next);
        tmp->next->next=tmp;
        tmp->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        reverse(head,head);
        return head;
    }
};
class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    
    return 0;
}