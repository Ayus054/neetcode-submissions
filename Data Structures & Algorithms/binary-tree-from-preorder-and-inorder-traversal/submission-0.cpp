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
    unordered_map<int,int>um;
    int preindex=0;
    TreeNode* buildT(vector<int>& preorder, vector<int>& inorder,int instart,int inend)
    {
        if(instart>inend) return nullptr;

        int rootval=preorder[preindex++];
        TreeNode* root=new TreeNode(rootval);
        int index=um[rootval];
        root->left=buildT(preorder,inorder,instart,index-1);
        root->right=buildT(preorder,inorder,index+1,inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
        {
            um[inorder[i]]=i;
        }
        return buildT(preorder,inorder,0,inorder.size()-1);
    }
};
