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
    int time,maxi;
public:
    void help(unordered_map<TreeNode*,TreeNode*>&mpp,TreeNode* root,int start){
     if(root==NULL) return ;
     if(root->left) mpp[root->left]=root;
     if(root->right) mpp[root->right]=root;
     help(mpp,root->left,start);
     help(mpp,root->right,start);
    }
    TreeNode* find(TreeNode* root,int start){
        if(root==NULL) return NULL;
        if(root->val==start) return root;
        TreeNode* left = find(root->left, start);
        if (left) return left;
        return find(root->right, start);
    }
    int amountOfTime(TreeNode* root, int start) {
        TreeNode* initial=find(root,start);
        unordered_map<TreeNode*,TreeNode*>mpp;
        help(mpp,root,start);
        unordered_map<TreeNode*,bool>visited;
        queue<pair<TreeNode*,int>>qu;
        qu.push({initial,0});
        visited[initial]=true;
        while(!qu.empty()){
             TreeNode* nodd=qu.front().first;
              time=qu.front().second;
             qu.pop();
             maxi=max(maxi,time);
              if(nodd->left && !visited[nodd->left]){
              qu.push({nodd->left,time+1});
              visited[nodd->left]=true;
              }
              if(nodd->right && !visited[nodd->right]){
              qu.push({nodd->right,time+1});
              visited[nodd->right]=true;
              }
              if(mpp[nodd] && !visited[mpp[nodd]]){
                qu.push({mpp[nodd],time+1});
                visited[mpp[nodd]]=true;
              }
        }
        return time;
    }
};