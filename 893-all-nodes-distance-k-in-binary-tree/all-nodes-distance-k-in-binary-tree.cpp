/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:

    // Step 1: Store parents using BFS
    void storeParents(unordered_map<TreeNode*, TreeNode*> &parent, TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if(node->left) {
                parent[node->left] = node;
                q.push(node->left);
            }
            if(node->right) {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        // Parent map bana lo
        unordered_map<TreeNode*, TreeNode*> parent;
        storeParents(parent, root);

        // BFS start from target
        unordered_set<TreeNode*> visited;
        queue<TreeNode*> q;

        q.push(target);
        visited.insert(target);

        int level = 0;

        while(!q.empty()) {

            int size = q.size();
            if(level == k) break;

            while(size--) {
                TreeNode* node = q.front();
                q.pop();

                // Left child
                if(node->left && !visited.count(node->left)) {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                // Right child
                if(node->right && !visited.count(node->right)) {
                    visited.insert(node->right);
                    q.push(node->right);
                }

                // Parent
                if(parent.count(node) && !visited.count(parent[node])) {
                    visited.insert(parent[node]);
                    q.push(parent[node]);
                }
            }

            level++;
        }

        // Collect all nodes at distance K
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};
