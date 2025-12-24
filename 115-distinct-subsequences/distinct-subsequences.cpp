class Solution {
public:
    int helper(string x,string &s,string &t,int a,int b ,vector<vector<int>>&dp){
        if(b<0) return 1;
        if(a<0) return 0;
        if(dp[a][b] !=-1) return dp[a][b];
         int take=0;
        if(s[a]==t[b])
         take= helper(x+s[a],s,t,a-1,b-1,dp);
        int nottake=helper(x,s,t,a-1,b,dp);
        return dp[a][b]=take+nottake;
    }
    int numDistinct(string s, string t) {
        int a=s.size();
        int b=t.size();
        string x="";
        vector<vector<int>>dp(a,vector<int>(b+1,-1));
   return helper(x,s,t,a-1,b-1,dp);
    }
};