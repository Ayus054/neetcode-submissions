/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>v;
        if(root==NULL)
        return v;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            v.push_back(q.front()->val);
            while(size--)
            {
                TreeNode* front=q.front();
                q.pop();
                if(front->right)
                q.push(front->right);
                if(front->left)
                q.push(front->left);
            }
        }
        return v;
    }
};
