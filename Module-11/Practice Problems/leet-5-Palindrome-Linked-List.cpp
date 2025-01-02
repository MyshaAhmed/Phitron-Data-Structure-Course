// question:  Palindrome Linked List
#include <bits/stdc++.h>
using namespace std;
// solution using LL==============================>
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
// solution copying LL to vector ==============================> provides higher performance
class Solution {
    public:
    bool isPalindrome(ListNode* head) {
        // using vector:=================>
        vector<int> v;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        vector<int> v2;
        v2=v;
        reverse(v2.begin(),v2.end());
        // if(v==v2)
        //     return true;
        // else
        //     return false; // more accuracy beats: 70%

        return v==v2; // less accuracy beats: 63%
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