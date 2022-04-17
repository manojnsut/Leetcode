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
private: void inorder(TreeNode* root, vector<int>&arr){
       if(root == nullptr)
           return;
       inorder(root->left,arr);
       arr.push_back(root->val);
       inorder(root->right,arr);
}
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr);
        TreeNode *root1 = new TreeNode(arr[0]);
        TreeNode *start = root1;
        for(int i = 1; i < arr.size(); ++i){
            root1->right= new TreeNode(arr[i]);
            root1 = root1->right;
        }
        return start;
    }
};