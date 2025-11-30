class Solution {
public:
        //    int mini=INT_MAX;
        void findkro(vector<vector<int>>& triangle,int n,int i,int j,vector<vector<int>>&dp){
          for(int j=0;j<n;j++)
          dp[n-1][j]=triangle[n-1][j];
          for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int d=triangle[i][j] + dp[i+1][j];
                int l=triangle[i][j] + dp[i+1][j+1];
                dp[i][j]=min(d,l);
             }
          }
        }
    int minimumTotal(vector<vector<int>>& triangle) {
        // int sum=0;
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
         findkro(triangle,m,0,0,dp);
         return dp[0][0];
      
    }
};