/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        string data;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            for(int i=0;i<size;i++){
                TreeNode* node=qu.front();
                qu.pop();
                if(node==NULL) data.append("#,");
                else{
                    data.append(to_string(node->val));
                    data.push_back(',');
                }
                if(node !=NULL){
                    qu.push(node->left);
                    qu.push(node->right);
                }
            }
        }
        return data;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
      if(data.size()==0) return NULL;
      stringstream ss(data);
      string str;
      getline(ss,str,',');
      TreeNode* root=new TreeNode(stoi(str));
      queue<TreeNode*>qu;
      qu.push(root);
      while(!qu.empty()){
        TreeNode* nodd=qu.front();
        qu.pop();
        getline(ss,str,',');
        if(str=="#"){
            nodd->left=NULL;
        }
        else{
            nodd->left=new TreeNode(stoi(str));
            qu.push(nodd->left);
        }
         getline(ss,str,',');
        if(str=="#"){
            nodd->right=NULL;
        }
        else{
            nodd->right=new TreeNode(stoi(str));
            qu.push(nodd->right);
        }
      }
      return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));