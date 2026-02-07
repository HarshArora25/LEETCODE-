class Solution {
private:
    int ans = 0;

    void dfs(TreeNode* root, int mini, int maxi) {
        if (!root) return;

        // update answer
        ans = max(ans, max(abs(root->val - mini), abs(root->val - maxi)));

        // update min & max for next level
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);

        dfs(root->left, mini, maxi);
        dfs(root->right, mini, maxi);
    }

public:
    int maxAncestorDiff(TreeNode* root) {
        if (!root) return 0;
        dfs(root, root->val, root->val);
        return ans;
    }
};
