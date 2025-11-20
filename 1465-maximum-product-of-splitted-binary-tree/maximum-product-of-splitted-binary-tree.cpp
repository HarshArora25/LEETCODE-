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
            long long  maxi=-1;
            long long SUM;
public:
        int treesum(TreeNode* root){
            if(root==NULL) return 0;
            int leftsum=treesum(root->left);
            int rytsum=treesum(root->right);
            int total=root->val+leftsum+rytsum;
            return total;
        }
        int bdabtaore(TreeNode* root){
            if(root==NULL) return 0;
            int lsum=bdabtaore(root->left);
            int rsum=bdabtaore(root->right);
            int summ=root->val+lsum+rsum;
            int bcha=SUM-summ;
             maxi=max(maxi,1LL*bcha*summ);
             return summ;
        }
        int maxProduct(TreeNode* root) {
            if(root==NULL) return 0;
            SUM=treesum(root);
            bdabtaore(root);
            return maxi % 1000000007;
    }
};