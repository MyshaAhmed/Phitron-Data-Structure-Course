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
void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->val<<" "; //root
    preorder(root->left); //left
    preorder(root->right);//right
}

void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left); //left
    cout<<root->val<<" "; //root
    inorder(root->right);//right
}
void postorder(Node* root)
{
    if(root==NULL)
        return;
    postorder(root->left); //left
    postorder(root->right);//right
    cout<<root->val<<" "; //root
}

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
int main()
{
    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

    cout<<"lever order Traversal: "<<endl;
    level_order(root);
    
    
    return 0;
}