class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       int no=grid.size();
       int m=grid[0].size();
       int sum=0;
       vector<int>ans;
       for(int i=0;i<no;i++){
        for(int j=0;j<m;j++){
         ans.push_back(grid[i][j]);
         sum+=grid[i][j];
        }
       }
       int val=0;
       int n=ans.size();
      sort(ans.begin(),ans.end());
      for(int i=1;i<n;i++){
       if(ans[i]==ans[i-1]){
       val=ans[i];
       break;
       }
      }
      sum=sum-val;
      int expsum=(n*(n+1))/2;
      int missing=expsum-sum;
      return{val,missing};
    }
};