#include <bits/stdc++.h>
using namespace std;
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>>q;
    if(root!=NULL)
        q.push({root,1});
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> parent=q.front();
        q.pop();
        TreeNode<int>* node= parent.first;
        int level= parent.second;
        
        if(node->val==searchedValue)
            return level;
        if(node->left!=NULL)
            q.push({node->left, level + 1});
        if(node->right!=NULL)
            q.push({node->right, level + 1});
    } 
}
int main()
{
    
    return 0;
}