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

void leftSideView(Node *root)
{
    if(root==NULL)
        return;
    if(root->left)
        leftSideView(root->left);
    else
        leftSideView(root->right);
    cout<<root->val<<" ";
   
}
void rightSideView(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->val<<" ";
    if(root->right)
    {
        rightSideView(root->right);
    }
    else
        rightSideView(root->left);

   
}



int main()
{
    Node* root=input_tree();
    if(root)
    {
        if(root->left)
            leftSideView(root->left);
        cout<<root->val<<" ";
        if(root->right)
            rightSideView(root->right);
    }
    
    return 0;
}
