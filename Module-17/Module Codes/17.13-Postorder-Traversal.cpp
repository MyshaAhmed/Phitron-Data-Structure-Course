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

    cout<<"Preorder Traversal: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder Traversal: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Postrder Traversal: "<<endl;
    postorder(root);
    
    return 0;
}