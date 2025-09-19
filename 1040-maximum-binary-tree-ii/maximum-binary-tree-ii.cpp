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
    void helper(TreeNode*& root, int value) {
        if (root->right == nullptr) {
            root->right = new TreeNode(value);  
            return;
        }
        else if (value > root->right->val) {
            TreeNode* node = new TreeNode(value);
            node->left = root->right;
            root->right = node;
            return;
        }
        else {
            helper(root->right, value);
        }
    }

public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if (val > root->val) {
            TreeNode* node = new TreeNode(val); 
            node->left = root;
            return node;
        }
        helper(root, val);
        return root;
    }
};
