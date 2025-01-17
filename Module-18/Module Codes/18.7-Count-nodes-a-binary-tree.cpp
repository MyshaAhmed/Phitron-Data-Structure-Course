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
// tree input
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

// count nodes:
int count_nodes(Node* root) 
{
    if(root==NULL)
        return 0;
    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return 1+l+r;
    // else
    //     return 1+count_nodes(root->left)+count_nodes(root->right);

}
int main()
{
    Node* root=input_tree();
    cout<<"NO. of nodes: ";
    cout<<count_nodes(root);
    
    /* 
        input:  10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
        
        output: NO. of nodes: 6
    */ 
    
    return 0;
}