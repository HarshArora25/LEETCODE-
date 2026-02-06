// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// private:
//     void helper(TreeNode* root,int val,int depth,int level){
//         if(level==depth-1){
//             if(root->left){
//             TreeNode* next=root->left;
//             TreeNode* bich=new TreeNode(val);
//             root->left=bich;
//             bich->left=next;
//             }
//             else if(root->left){
//             TreeNode* next2=root->right
//             TreeNode* bichs=new TreeNode(depth);
//             root->right=bichs;
//             bich->right=next2;
//         }
//     }
//     helper(root->left,val,depth,level+1);
//     helper(root->right,val,depth,level+1);
//     }

// public:
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//        helper(root,val,depth,1); 
//     }
// };
class Solution {
private:
    void helper(TreeNode* root, int val, int depth, int level) {
        if (root == NULL) return;

        if (level == depth - 1) {
            TreeNode* oldLeft = root->left;
            TreeNode* oldRight = root->right;

            root->left = new TreeNode(val);
            root->left->left = oldLeft;

            root->right = new TreeNode(val);
            root->right->right = oldRight;

            return;
        }

        helper(root->left, val, depth, level + 1);
        helper(root->right, val, depth, level + 1);
    }

public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        helper(root, val, depth, 1);
        return root;
    }
};
