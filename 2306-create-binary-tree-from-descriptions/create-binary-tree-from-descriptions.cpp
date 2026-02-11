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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
     unordered_map<int,TreeNode*>mpp;
     unordered_set<int>st;

     for(vector<int>&x:descriptions){
       int parent=x[0];
       int child=x[1];
       int lefty=x[2];
       if(mpp.find(parent)==mpp.end()){
        mpp[parent]=new TreeNode(parent);
       }
       if(mpp.find(child)==mpp.end()){
        mpp[child]=new TreeNode(child);
       }
       if(lefty==1){
        mpp[parent]->left=mpp[child];
       }
       else
       mpp[parent]->right=mpp[child];
       st.insert(child);
        }
      
     for(vector<int>&x:descriptions){
        int parent=x[0];
        if(st.find(parent)==st.end())
        return mpp[parent];
     } 
     return NULL;
    }
};