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
    void findtot(TreeNode* root,long long& tot){
      if(root==NULL) return;
      tot+=root->val;
      findtot(root->left,tot);
      findtot(root->right,tot);
    }
    private:
    int findmaxi(TreeNode*root,int tot,long long& maxi){
      if(root==NULL) return 0 ;
      long long left=findmaxi(root->left,tot,maxi);
      long long ryt=findmaxi(root->right,tot,maxi);
      long long sum=root->val+left+ryt;
      long long subsum=tot-sum;
      maxi=max(maxi,subsum*sum);
      return sum;
    }
public:
    int maxProduct(TreeNode* root) {
       long long tot=0;
       findtot(root,tot);
       long long maxi=0;
       findmaxi(root,tot,maxi);
       return maxi % 1000000007;
    }
};