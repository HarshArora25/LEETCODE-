class Solution {
private:
    bool helper(string& s,string& p,int n,int m, vector<vector<int>>&dp){
        if(n<0 && m<0) return true;
        if( m<0) return false;
        if(n<0){
            while(m>=0){
                if(p[m]=='*')
                m--;
                else
                return false;
            }
            return true;
        }
        if(dp[n][m] !=-1) return dp[n][m]; 
        bool take=false,nottake=false;
        if(s[n]==p[m] || p[m]=='?'){
            take=helper(s,p,n-1,m-1,dp);
        }
        else if(p[m]=='*'){
          nottake= helper(s,p,n-1,m,dp) || helper(s,p,n,m-1,dp);
        }
        return dp[n][m]=take || nottake;
    }
public:
    bool isMatch(string s, string p) {
     int n=s.size();
     int m=p.size();
     vector<vector<int>>dp(n,vector<int>(m,-1));
     return helper(s,p,n-1,m-1,dp);    
    }
};