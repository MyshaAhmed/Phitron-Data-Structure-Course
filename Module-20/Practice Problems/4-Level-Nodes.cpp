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

int count_nodes(Node* root) 
{
    if(root==NULL)
        return 0;
    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return 1+l+r;
    

}
int max_height(Node* root) 
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    Node* root=input_tree();
    int x;
    cin >> x;
    vector<int> v;
    bool flag=false;
    queue<pair<Node*,int>>q;
    if(root!=NULL)
        q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> parent=q.front();
        q.pop();
        Node* node= parent.first;
        int level= parent.second;
        
        if(level==x)
        {
            v.push_back(node->val);
            flag=true;
        }
        if(node->left!=NULL)
            q.push({node->left, level + 1});
        if(node->right!=NULL)
            q.push({node->right, level + 1});
    }
    if(flag)
    {
        for(auto i: v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
        cout<<"Invalid"<<endl;
    return 0;
}
