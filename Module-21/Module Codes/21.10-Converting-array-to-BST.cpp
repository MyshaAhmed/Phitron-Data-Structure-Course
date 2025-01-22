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

Node* convert_array_to_BST(int a[],int n, int l, int r)
{
    
    if(l>r)
        return NULL;
    int mid=(l+r)/2;
    Node* root=new Node(a[mid]);
    Node* leftroot=convert_array_to_BST(a, n, l, mid-1);
    Node* rightroot=convert_array_to_BST(a, n, mid+1, r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    Node* root=convert_array_to_BST(a, n, 0, n-1);
    level_order(root);
    return 0;

    /* input:
            6
            2 5 8 11 15 18
            
       output: 8 2 15 5 11 18 
    */
}