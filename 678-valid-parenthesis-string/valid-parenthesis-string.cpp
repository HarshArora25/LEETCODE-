class Solution {
private:
      bool helper(int i,int n,string& s,int balance,vector<vector<int>>&dp){
        if(balance<0) return false;
        if(i==n)
        return balance==0;
        if(dp[i][balance] !=-1) return dp[i][balance];
        if(s[i]=='(')
        return dp[i][balance]=helper(i+1,n,s,balance+1,dp);
        if(s[i]==')')
        return dp[i][balance]=helper(i+1,n,s,balance-1,dp);
        return dp[i][balance] =helper(i+1,n,s,balance+1,dp) || helper(i+1,n,s,balance-1,dp) || helper(i+1,n,s,balance,dp);
      }
public:
    bool checkValidString(string s) {
      int n=s.size();
      vector<vector<int>>dp(n,vector<int>(n,-1));
     return  helper(0,n,s,0,dp);  
    }
};