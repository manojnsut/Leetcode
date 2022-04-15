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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        if(!root) 
            return nullptr;
        
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        
        //agr root ki value low se kam hui to hm left ko trim karke right return kr denge
        if(root->val < low)
            return root->right;
      //agr root ki value high se jaada hui to hm right ko trim karke left return kr denge
        if(root->val > high)
             return root->left;
        //agr range mei hua to vaise ka vaisa return kar denge
        return root;     
    }
};