class Solution {
    // int helper(string &s,string &a,int idx1,int idx2,vector<vector<int>>&dp){
    //     if(idx1<0 || idx2<0 ) return 0;
    //     if(dp[idx1][idx2] !=-1) return dp[idx1][idx2];
    //     if(s[idx1]==a[idx2])
    //     return dp[idx1][idx2]= 1+helper(s,a,idx1-1,idx2-1,dp);
    //     else
    //     return dp[idx1][idx2]=max(helper(s,a,idx1-1,idx2,dp) , helper(s,a,idx1,idx2-1,dp));
    //     return 0;
    // }
public:
    int minInsertions(string s) {
       string a=s;
       reverse(a.begin(),a.end());
       int idx=s.size();
       vector<vector<int>>dp(idx+1,vector<int>(idx+1,-1));
    //   int tot= helper(s,a,idx-1,idx-1,dp); 
    //   return idx-tot;
    for(int i=0;i<=idx;i++){
    dp[i][0]=0;
    dp[0][i]=0;
    }
       for(int i=1;i<=idx;i++){
        for(int j=1;j<=idx;j++){
            if(s[i-1]==a[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
       }
       return idx-dp[idx][idx];
    }
};