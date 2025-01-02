// question:  Middle of the Linked List
#include <bits/stdc++.h>
using namespace std;
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
class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* tmp=head;
        int count=0;
        while(tmp!=NULL)
        {
            count++;
            tmp=tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz=size(head);
        ListNode* tmp=head;
        for(int i=1;i<=sz/2;i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};
int main()
{
    
    return 0;
}