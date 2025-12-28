class Solution {
public:
    bool helper(string &s,string &p,int n,int m, vector<vector<int>>&dp){
        if(m<0 && n<0) return true;
        if(m<0) return false;
        if(n<0){
            for(int i=0;i<=m;i++){
                if(p[i] !='*')
                return false;
            }
            return true;
        }
              bool ans;
        if(dp[n][m] !=-1) return dp[n][m];
        if(s[n]==p[m] || p[m]=='?') ans= helper(s,p,n-1,m-1,dp);
        else if (p[m] == '*')
        ans = helper(s,p,n,m-1,dp) || helper(s,p,n-1,m,dp);
        else
       ans= false;
        return dp[n][m] = ans;;
    }
    bool isMatch(string s, string p) {
       int n=s.size();
       int m=p.size();
       vector<vector<int>>dp(n,vector<int>(m+1,-1));
     return  helper(s,p,n-1,m-1,dp); 
    }
};