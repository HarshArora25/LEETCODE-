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
    TreeNode* deletehelper(TreeNode* root,unordered_set<int>&stt,vector<TreeNode*>&result){
        if(root==NULL) return NULL;
        root->left=deletehelper(root->left,stt,result);
        root->right=deletehelper(root->right,stt,result);
        if(stt.find(root->val)!=stt.end()){
            if(root->left !=NULL) result.push_back(root->left);
            if(root->right !=NULL) result.push_back(root->right);
        return NULL;
        }
        else
        return root;
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
       vector<TreeNode*>result;
      unordered_set<int>stt;
      for(int& num:to_delete)
      stt.insert(num);
      deletehelper(root,stt,result);
      if(stt.find(root->val)==stt.end())
      result.push_back(root);
      return result;
    }
};