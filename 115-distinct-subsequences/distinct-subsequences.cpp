class Solution {
public:
    // int helper(string &s,string &t,int a,int b ,vector<vector<int>>&dp){
        // if(b<0) return 1;
        // if(a<0) return 0;
        // if(dp[a][b] !=-1) return dp[a][b];
        //  int take=0;
        // if(s[a]==t[b])
        //  take= helper(s,t,a-1,b-1,dp);
        // int nottake=helper(s,t,a-1,b,dp);
        // return dp[a][b]=take+nottake;
    //}
    int numDistinct(string s, string t) {
          if (t.size() > s.size()) return 0;
        int a=s.size();
        int b=t.size();
        // string x="";
       vector<vector<unsigned long long>> dp(
            a + 1, vector<unsigned long long>(b + 1, 0)
        );
        for(int i=0;i<=a;i++) dp[i][0]=1;
        for(int i=1;i<=b;i++) dp[0][i]=0;
//    return helper(x,s,t,a-1,b-1,dp);
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
              if(s[i-1]==t[j-1]){
              dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
              }
              else
              dp[i][j]=dp[i-1][j];
            }
        }
      return dp[a][b];  
    }
};