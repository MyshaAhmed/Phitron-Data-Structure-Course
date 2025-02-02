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
vector<int> leaf_node(Node* root)
{
    vector<int> v;
    if(root==NULL) return v;
    queue<Node*> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        if(p->left==NULL && p->right==NULL)
            v.push_back(p->val);
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return v;
}
int main()
{
    Node* root=input_tree();
    vector<int> v=leaf_node(root);
    reverse(v.begin(), v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
