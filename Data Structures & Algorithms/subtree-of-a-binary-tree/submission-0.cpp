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
    bool isSameTree(TreeNode* root, TreeNode* subroot)
    {
        if(root==NULL && subroot==NULL)
        return true;
        if(root==NULL || subroot==NULL || root->val!=subroot->val)
        return false;
        return isSameTree(root->left,subroot->left)&&isSameTree(root->right,subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) 
    {    
        if(!root) return !subroot;
        if(isSameTree(root,subroot))
        return true;
        return isSubtree(root->left,subroot)||isSubtree(root->right,subroot);
    }
};
