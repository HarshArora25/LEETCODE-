class Solution {
// private:
//     int help(string word1, string word2, int n,int m,vector<vector<int>>&dp){
//       if(n < 0)
//     return m + 1;
//      if(m < 0)
//     return n + 1;
//         //  int insert=0,del=0,replace=0;
//         if(dp[n][m] !=0) return dp[n][m];
//     if(word1[n]==word2[m])
//       return help(word1,word2,n-1,m-1,dp);
//         int insert= 1+help(word1,word2,n,m-1,dp);
//         int replace=1+help(word1,word2,n-1,m-1,dp);
//         int del=1+help(word1,word2,n-1,m,dp);

//     return dp[n][m]=min({insert,replace,del});
//     }
public:
    int minDistance(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
       vector<vector<int>>dp(n+1,vector<int>(m+1,0));
       for(int j=0;j<=m;j++) dp[0][j]=j;
       for(int i=0;i<=n;i++) dp[i][0]=i;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               if(word1[i-1]==word2[j-1])
               dp[i][j]=dp[i-1][j-1];
               else{
               int insert= 1+dp[i][j-1];
               int repl=1+dp[i-1][j-1];
               int del=1+dp[i-1][j];
               dp[i][j]=min({insert,repl,del});
               }
            }
        }  
            return dp[n][m];         
    }
};