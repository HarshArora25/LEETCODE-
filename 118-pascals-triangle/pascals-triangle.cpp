class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>vec;
      for(int i=0;i<numRows;i++){
        vector<int>res(i+1,1);
        for(int j=0;j<=i;j++){
            if(i==j || j==0) continue;
           res[j]=vec[i-1][j-1]+vec[i-1][j];
        }
        vec.push_back(res);
      }  
      return vec;
    }
};