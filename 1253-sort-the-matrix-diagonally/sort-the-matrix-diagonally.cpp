class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
      unordered_map<int,vector<int>>mpp;
      for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            mpp[i-j].push_back(mat[i][j]);
        }
      }
      for (auto &it : mpp) {
    sort(it.second.begin(), it.second.end(),greater<int>());
}
    
     for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
             int key = i - j;
                mat[i][j] = mpp[key].back();      
                mpp[key].pop_back();             
            }
        }
        return mat; 
    }
};