// question: Remove Duplicates from Sorted List
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* tmp=head;
        while(tmp->next!= NULL)
        {
            if(tmp->val==tmp->next->val)
            {
                //good practice is to delete unnecessary node from memory;
                ListNode* deletenode=tmp->next;
                tmp->next=tmp->next->next;
                delete deletenode;
            }
            else
            {
                tmp=tmp->next;
            }
        }
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