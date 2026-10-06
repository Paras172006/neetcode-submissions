class Solution {
public:
    int dfs(TreeNode* root, int maxi) {
        if (root == nullptr)
            return 0;

        int cnt = 0;

        // Is this node good?
        if (root->val >= maxi) {
            cnt = 1;
        }

        // Update maximum for children
        maxi = max(maxi, root->val);

        cnt += dfs(root->left, maxi);
        cnt += dfs(root->right, maxi);

        return cnt;
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};