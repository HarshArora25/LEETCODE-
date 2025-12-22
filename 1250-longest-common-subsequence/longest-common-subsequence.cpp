class Solution {
 public:
    int helper(string &text1,string &text2,int idx1,int idx2, vector<vector<int>>&dp){
    if(idx1<0 || idx2<0) return 0;
    if(dp[idx1][idx2] !=-1) return dp[idx1][idx2];
    if(text1[idx1]==text2[idx2])
    return dp[idx1][idx2]=1+helper(text1,text2,idx1-1,idx2-1,dp);
     else{
    return dp[idx1][idx2]=max(helper(text1,text2,idx1-1,idx2,dp),helper(text1,text2,idx1,idx2-1,dp));
     }
     return 0;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int idx1=text1.size();
        int idx2=text2.size();
         vector<vector<int>>dp(idx1,vector<int>(idx2+1,-1));
      return  helper(text1,text2,idx1-1,idx2-1,dp);
    }
};