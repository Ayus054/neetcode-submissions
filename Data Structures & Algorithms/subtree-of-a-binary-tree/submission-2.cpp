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
    bool bfs(TreeNode* root,TreeNode* subRoot)
    {
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(root);
        q2.push(subRoot);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode* temp1=q1.front();
            TreeNode* temp2=q2.front();
            q1.pop();
            q2.pop();
            if(temp1->val!=temp2->val)
            {
                return false;
            }
            if(temp1->left)
            q1.push(temp1->left);
            if(temp1->right)
            q1.push(temp1->right);
            if(temp2->left)
            q2.push(temp2->left);
            if(temp2->right)
            q2.push(temp2->right);
        }
        return q1.empty()&&q2.empty();
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if(root==NULL)
        return false;
        if(root->val==subRoot->val && bfs(root,subRoot))
        return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};
