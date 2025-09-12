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
    int find(vector<int>&inorder,int x,int start,int end){
        for(int i=start;i<=end;i++){
           if(x==inorder[i])
            return i;
        }
        return -1;
    }
    private:
    TreeNode* insertt(vector<int>&inorder,vector<int>&postorder,int start,int end,int& index){
        if(start>end) return nullptr;
        TreeNode* root=new TreeNode(postorder[index]);
        int pos=find(inorder,postorder[index],start,end);
        index--;
           root->right=insertt(inorder,postorder,pos+1,end,index);
        root->left=insertt(inorder,postorder,start,pos-1,index);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int start=0;
        int end=postorder.size()-1;
        int index=end;
    TreeNode* roots=insertt(inorder,postorder,start,end,index);
    return roots;
    }
};