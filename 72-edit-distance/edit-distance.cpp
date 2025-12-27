class Solution {
public:
    int helper(string &word1,string &word2,int n,int m, vector<vector<int>>&dp){
        if(n<0) return m+1;
        if(m<0) return n+1;
        if(dp[n][m] !=-1) return dp[n][m];
        if(word1[n]==word2[m]){
           return dp[n][m]=helper(word1,word2,n-1,m-1,dp);
        }
        else
            return dp[n][m]=1+min(helper(word1,word2,n-1,m,dp),min(helper(word1,word2,n,m-1,dp),helper(word1,word2,n-1,m-1,dp)));
        return 0;
    }
    int minDistance(string word1, string word2) {
     int n=word1.size();
     int m=word2.size();
     vector<vector<int>>dp(n,vector<int>(m+1,-1));
    return helper(word1,word2,n-1,m-1,dp);   
    }
};