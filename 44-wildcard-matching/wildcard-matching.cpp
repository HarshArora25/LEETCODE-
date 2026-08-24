class Solution {
private:
    int helper(int n,int m,string& s,string& p,vector<vector<int>>&dp){
        if(n<0 && m<0) return true;
        if(n>=0 && m<0) return false;
        if(m>=0 && n<0){
            for(int k=0;k<=m;k++)
            if(p[k] !='*') return false;
        return true;
        }
        if(dp[n][m] !=-1) return dp[n][m];
        if(s[n]==p[m] || p[m]=='?')
        return dp[n][m]=helper(n-1,m-1,s,p,dp);
        if( p[m]=='*')
        return dp[n][m]=helper(n-1,m,s,p,dp) || helper(n,m-1,s,p,dp);
        return dp[n][m]=false;
    }
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       return  helper(n-1,m-1,s,p,dp);
    }
};