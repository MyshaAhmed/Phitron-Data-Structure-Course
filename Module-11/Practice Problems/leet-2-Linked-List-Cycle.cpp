// question: Linked List Cycle
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
    bool hasCycle(ListNode *head) {
       
        // hare-tortoise algorithm:======>
        ListNode * slow=head;
        ListNode * fast=head;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=true;
                break;
            }
        }
        return flag;
        
    }
};
int main()
{
    
    return 0;
}