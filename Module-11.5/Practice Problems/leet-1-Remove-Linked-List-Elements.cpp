// questions: Remove Linked List Elements
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(1)
        {
            if(head->val!=val)
                break;
            head=head->next;
            if(head==NULL)
                return head;
        }
        ListNode* tmp=head;
        while(tmp->next!=NULL)
        {
            if(tmp->next->val==val)
            {
                tmp->next=tmp->next->next;
            }
            else
                tmp=tmp->next;
        }
        if(tmp->val==val)
            return NULL;
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