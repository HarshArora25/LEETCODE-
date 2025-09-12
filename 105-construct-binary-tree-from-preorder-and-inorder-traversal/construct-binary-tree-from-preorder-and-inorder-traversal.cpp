class Solution {
private:
    int find(int x, const vector<int>& inorder, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (x == inorder[i])
                return i;
        }
        return -1;
    }

    TreeNode* ressu(vector<int>& preorder, vector<int>& inorder, int start, int end, int &index) {
        if (start > end) return nullptr;

        int pos = find(preorder[index], inorder, start, end);

        TreeNode* root = new TreeNode(preorder[index]);
        index++; 

        root->left = ressu(preorder, inorder, start, pos - 1, index);
        root->right = ressu(preorder, inorder, pos + 1, end, index);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        return ressu(preorder, inorder, 0, preorder.size() - 1, index);
    }
};
