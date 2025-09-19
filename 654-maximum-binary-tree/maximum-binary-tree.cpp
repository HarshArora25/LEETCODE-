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
    int maxi(int left, int right, vector<int>& nums, int &pos) {
        int j = INT_MIN;
        for (int i = left; i <= right; i++) {
            if (nums[i] > j) {
                j = nums[i];
                pos = i;  
            }
        }
        return j;
    }
    TreeNode* helper(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;  
        int pos;
        int x = maxi(left, right, nums, pos);
        TreeNode* root = new TreeNode(x);
        root->left = helper(nums, left, pos - 1);
        root->right = helper(nums, pos + 1, right);
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};
