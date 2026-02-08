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
    void find(TreeNode*root,TreeNode*target,int k,queue<pair<TreeNode*,int>>&qu, unordered_map<TreeNode*,bool>&vis,unordered_map<TreeNode*,      TreeNode*>mpp){
              qu.push({target,0});
              vis[target]=true;
              while(!qu.empty()){
              int size=qu.size();
               if(qu.front().second==k)
              break;
              for(int i=0;i<size;i++){
               TreeNode* fr=qu.front().first;
               int step=qu.front().second;
               qu.pop();
               if(fr->left && !vis[fr->left]){ qu.push({fr->left,step+1});
                vis[fr->left] = true;
               }
               if(fr->right && !vis[fr->right]){ qu.push({fr->right,step+1});
                vis[fr->right] = true;
               }
               if(mpp[fr] && !vis[mpp[fr]]){ qu.push({mpp[fr],step+1});
                vis[mpp[fr]] = true;
               }
              }
              }
    }
public:
    void fillmap( unordered_map<TreeNode*,TreeNode*>&mpp,TreeNode* root){
        if(root==NULL) return ;
        if(root->left) mpp[root->left]=root;
        if(root->right) mpp[root->right]=root;
        fillmap(mpp,root->left);
        fillmap(mpp,root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       queue<pair<TreeNode*,int>>qu;
       unordered_map<TreeNode*,TreeNode*>mpp;
       fillmap(mpp,root);
       unordered_map<TreeNode*,bool>vis;
    //    TreeNode* pos=posoftar(root,target);
       find(root,target,k,qu,vis,mpp);
       vector<int>res;
       while(!qu.empty()){
        res.push_back(qu.front().first->val);
        qu.pop();
       }
       return res;
    }
};