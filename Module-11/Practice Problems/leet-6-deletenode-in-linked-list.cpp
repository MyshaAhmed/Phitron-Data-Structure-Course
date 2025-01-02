// question:  Delete Node in a Linked List
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
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