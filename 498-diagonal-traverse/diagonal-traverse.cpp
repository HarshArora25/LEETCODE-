class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
            mpp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>x;
        for(int k=0;k<mat.size()+mat[0].size()-1;k++){
            if(k%2==0)
            reverse(mpp[k].begin(),mpp[k].end());
            for(int val:mpp[k])
            x.push_back(val);
        }
        return x;
    }
};