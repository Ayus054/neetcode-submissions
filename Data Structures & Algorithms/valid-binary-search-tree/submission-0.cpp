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
    bool f(TreeNode* root,int rmin,int rmax)
    {
        if(root==NULL)return true;

        if(root->val<=rmin || root->val>=rmax)
        {
            return false;
        }
        return f(root->left,rmin,root->val) && f(root->right,root->val,rmax);
    }
    bool isValidBST(TreeNode* root) {
        return f(root,INT_MIN,INT_MAX);
        
    }
};
