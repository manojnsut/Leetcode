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
    int widthOfBinaryTree(TreeNode* root) {
     // idea is that: as we know binary can be reperesent as a array where
     // if the i is the current node index then,
     // left and right node will be 2*i and 2*i + 1 respectively
    
      unsigned int max_width = 1;
      // in queue we storing the nodes and it's index
      queue<pair<TreeNode*,unsigned int> > q;
      // root node index is 0
      q.push({root,0});
        
      while(!q.empty()){
          int n = q.size();
          unsigned int first_idx = 0;
          //traversing all nodes at a level starting left most node as index = 0
          for(int i = 0; i < n; i++){
              auto [ node, idx ] = q.front();
              q.pop();
              
              if(i == 0)
                  first_idx = idx;
              else {
                  unsigned int width = idx - first_idx + 1;
                  max_width = max(max_width, width );
              }               
              
              if(node->left)
                  q.push({node->left,2*idx - first_idx});
              if(node->right)
                  q.push({node->right,2*idx + 1 - first_idx});       
          }
      }
     
      return max_width;
    }
};