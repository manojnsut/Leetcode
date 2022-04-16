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
private: int prev = 0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root){
        if(root->right)
            convertBST(root->right);
        prev = root->val + prev;
        root->val = prev;
        if(root->left)
            convertBST(root->left);
        }
        return root;
    }
};