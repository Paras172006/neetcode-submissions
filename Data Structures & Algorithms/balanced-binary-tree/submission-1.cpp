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
    int h(TreeNode* root) {

        if(root == NULL)
            return 0;

        int left = h(root->left);
        int right = h(root->right);

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        if(abs(h(root->left)-h(root->right)) > 1){
            return false;
        }
          if(!isBalanced(root->left))
            return false;

        if(!isBalanced(root->right))
            return false;

        return true;
    }
};
