class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;

        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

          
            if (temp->left && !temp->left->left && !temp->left->right) { // check krre h ki leaf node h na
            
                sum += temp->left->val;
            }

          
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        return sum;
    }
};
