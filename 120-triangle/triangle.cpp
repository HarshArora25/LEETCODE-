class Solution {
// private:
//     int help(vector<vector<int>>& triangle,int row,int col,vector<vector<int>>& dp){
//         if(row==triangle.size()-1) return triangle[row][col];
//         if(dp[row][col] !=-1) return dp[row][col];
//         int down=help(triangle,row+1,col,dp);
//         int diag=help(triangle,row+1,col+1,dp);
//         return dp[row][col]=triangle[row][col]+min(down,diag);
//     }
public:
    int  minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size()-1;
       vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=n;i>=0;i--){
            for(int j=0;j<=i;j++){
                if(i==n) dp[i][j]=triangle[i][j];
                else
                dp[i][j]=triangle[i][j]+min(dp[i+1][j+1],dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};