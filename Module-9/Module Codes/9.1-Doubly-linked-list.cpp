#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    /*                                      __________________
                                            |  N | VAL  | N  |
                                            |____|______|____|                                                                 

    */ 
};
int main()
{   
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* tail= new Node(30);
    /*                                      __________________
                                            |  p |      | N  |
                                            |____|______|____|  
  __________________      __________________       __________________
  |  N |  10  | a  |----> |  h |  20  | t  | ----> |  a |   30 | N  | 
  |____|______|____|<---- |____|______|____| <---- |____|______|____|
          head                     a                      tail                      
 
    */ 
    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;
    return 0;
}