class Solution {
private:
    bool parents(TreeNode* root, int a, int b) {
        if (!root) return false;
        if (root->left && root->right) {
            if ((root->left->val == a && root->right->val == b) ||
                (root->left->val == b && root->right->val == a))
                return true;
        }
        return parents(root->left, a, b) || parents(root->right, a, b);
    }

public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;

        queue<TreeNode*> q;
        q.push(root);  // q m push kro root ko
        int l = -1, j = -1;
        int level = 0;

        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                TreeNode* temp = q.front();
                q.pop();

                if (temp->left) {
                    if (temp->left->val == x) l = level;
                    if (temp->left->val == y) j = level;
                    q.push(temp->left);
                }
                if (temp->right) {
                    if (temp->right->val == x) l = level;
                    if (temp->right->val == y) j = level;
                    q.push(temp->right);
                }
            }
            if (l != -1 || j != -1) break; 
            level++;
        }

        return (l == j) && !parents(root, x, y);
    }
};
