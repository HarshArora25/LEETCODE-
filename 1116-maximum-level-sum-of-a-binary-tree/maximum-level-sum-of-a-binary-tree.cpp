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
public:
long long maxi=INT_MIN;
int level=0,x=0;
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
       int count=0;
        while(!q.empty()){
            int size=q.size();
            long long sum=0;
            level++;
        while(size--){
        TreeNode* curr=q.front();
        sum+=curr->val;
        q.pop();
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        }
        if(sum>maxi){
        maxi=max(maxi,sum);
        x=level;
        }
        }
       return x; 
    }
};