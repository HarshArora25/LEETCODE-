class Solution {
private:
    string helper(TreeNode* root, unordered_map<string, int>& mpp, vector<TreeNode*>& res) {
        if (!root) return "N";

        string s = to_string(root->val) + "," +
                   helper(root->left, mpp, res) + "," +
                   helper(root->right, mpp, res);

        if (mpp[s] == 1) {
            res.push_back(root);
        }

        mpp[s]++;
        return s;
    }

public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string, int> mpp;
        vector<TreeNode*> res;
        helper(root, mpp, res);
        return res;
    }
};
