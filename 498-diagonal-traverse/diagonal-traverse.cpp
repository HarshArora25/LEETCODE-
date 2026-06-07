class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mpp;
        int n=mat.size();
        int m=mat[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              mpp[i+j].push_back(mat[i][j]);
            }
        }
        for(auto& it:mpp){
            if(it.first%2==0){
            reverse(it.second.begin(),it.second.end());
            }
        }
        vector<int>res;
        for(auto& it:mpp){
         for(auto elem:it.second){
            res.push_back(elem);
         }  
        }
        return res;
    }
};