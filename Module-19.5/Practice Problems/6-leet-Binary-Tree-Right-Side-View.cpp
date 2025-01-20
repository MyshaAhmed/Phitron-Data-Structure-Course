class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        bool freq[105]={false};
        if(root==NULL)
            return v;
        queue<pair<TreeNode*,int>>q;
        if(root)
            q.push({root,0});
        while(!q.empty())
        {
            pair<TreeNode*,int> p=q.front();
            q.pop();
            TreeNode* node=p.first;
            int level=p.second;
            if(freq[level]==false)
            {
                v.push_back(node->val);
                freq[level]=true;
            }

            if(node->right)
                q.push({node->right,level+1});
            if(node->left)
                q.push({node->left,level+1});
        }
        return v;
        
        
    }
};