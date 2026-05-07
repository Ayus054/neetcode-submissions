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
    int dfs(TreeNode* root,int max)
    {
        if(root==NULL)
        return 0;
        int count=0;
        if(root->val>=max)
        {
            max=root->val;
            count=1;
        }
        count+=dfs(root->left,max);
        count+=dfs(root->right,max);
        return count;
    }
    int goodNodes(TreeNode* root) {
        int max=INT_MIN;
        return dfs(root,max);
    }
};
