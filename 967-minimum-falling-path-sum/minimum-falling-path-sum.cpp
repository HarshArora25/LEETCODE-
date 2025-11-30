class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int l=1e9;
        vector<vector<int>>dp(m,vector<int>(m,-1));
        for(int col=0;col<m;col++)
        dp[m-1][col]=matrix[m-1][col];
        for(int i=m-2;i>=0;i--){
           int ab=1e9,cd=1e9,ef=1e9;
        for(int j=0;j<m;j++){
            if(j-1>=0)
             ab=matrix[i][j] +  dp[i+1][j-1];
             cd=matrix[i][j] +  dp[i+1][j];
            if(j+1<m)
             ef=matrix[i][j] + dp[i+1][j+1];
            dp[i][j]=min(min(ab,cd),ef);
            }
        }
        int x;
        for(int i=0;i<m;i++){
         x=min(x,dp[0][i]);
        }
        return x;
    }
};