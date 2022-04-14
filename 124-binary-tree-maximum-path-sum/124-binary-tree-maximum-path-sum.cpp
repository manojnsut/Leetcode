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
private:
    int solve(TreeNode* root, int &res) {
        //base condtion
        if( root == nullptr)
            return 0;
        
        //hypothesis
        int l = solve(root->left,res);
        int r = solve(root->right,res);
        
        //induction
        int temp = max(root->val, max(l,r) + root->val);
        int ans = max(temp,l + r + root->val);
        res = max(res,ans);
        
        return temp;
    }
    
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        solve(root,res);
        return res;
    }
};