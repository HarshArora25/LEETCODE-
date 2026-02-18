class Solution {
private:
    bool helpme(string& s, string& p,int n,int m,int i,int j, vector<vector<int>>&dp){
       if(i==n && j==m) return true;
       if(j==m) return false;
       if(i==n){
        for(int k=j;k<m;k++){
            if(p[k] !='*' ) return false;
        }
        return true;
       }
        if(dp[i][j] !=-1) return dp[i][j];
        if(s[i]==p[j] || p[j]=='?'){
            return dp[i][j]=helpme(s,p,n,m,i+1,j+1,dp);
        }
        else if(p[j]=='*'){
            return dp[i][j]=helpme(s,p,n,m,i,j+1,dp) || helpme(s,p,n,m,i+1,j,dp);
        }
        else 
        return dp[i][j]= false;
    }
public:
    bool isMatch(string s, string p) {
    int n=s.size();
    int m=p.size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return helpme(s,p,n,m,0,0,dp);    
    }
};