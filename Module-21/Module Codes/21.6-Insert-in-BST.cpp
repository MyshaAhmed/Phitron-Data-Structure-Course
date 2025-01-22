#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void level_order(Node* root)
{
    // edge case:
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // step 1: ber kore ana
        Node* f=q.front();
        q.pop();

        // step 2: print kora , or oi node k niye kaaj 
        cout<<f->val<<" ";

        // step 3: queue te children push kora
        if(f->left) // if(f->left!=NULL)===> same as  NULL=false in compiler
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}
Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft, *myRight;
        if(l==-1) myLeft=NULL;
        else myLeft=new Node(l);
        if(r==-1) myRight=NULL;
        else myRight=new Node(r);
        p->left=myLeft;
        p->right=myRight;
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool search(Node* root, int val)
{
    if(root==NULL) 
        return false;
    if(root->val==val) 
        return true;
    if(root->val>val)
        return search(root->left, val); 
    else
        return search(root->right, val);
}

void insert(Node* &root, int val)
{
    if(root==NULL)
        root=new Node(val);
    if(root->val>val)
    {
        if(root->left==NULL)
        {
            root->left=new Node(val);
            return;
        }
        else
            insert(root->left, val);
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=new Node(val);
            return;
        }
        else
            insert(root->right, val);
    }
}
int main()
{
    Node* root=input_tree();
    int val;
    cin>>val;
    insert(root,val);
    level_order(root);
    return 0;

    // input:
    // 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
    // 17
    // output: 10 6 23 9 19 29 7 12 35 17 
}