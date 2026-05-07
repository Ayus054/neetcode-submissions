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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "null";
        string data="";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* front=q.front();
            q.pop();
            if(front){
                data+=to_string(front->val)+",";
                q.push(front->left);
                q.push(front->right);
            }
            else{
                data+="null,";
            }
        }
        return data;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="null")return nullptr;

        stringstream ss(data);
        string value;
        getline(ss,value,',');
        TreeNode* root=new TreeNode(stoi(value));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(getline(ss,value,','))
            {
                if(value!="null")
                {
                    node->left=new TreeNode(stoi(value));
                    q.push(node->left);
                }
            }
            if(getline(ss,value,','))
            {
                if(value!="null")
                {
                    node->right=new TreeNode(stoi(value));
                    q.push(node->right);
                }
            }
        }
        return root;
    }
};
