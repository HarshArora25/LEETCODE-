class Solution {
public:
   int  find(vector<int>&dp,int n){
          if(n<=1) return n;
      if(dp[n] !=-1) return dp[n];
       return dp[n]= find(dp,n-1) + find(dp,n-2); 
     }
    int fib(int n) {
    vector<int>dp(n+1,-1);
    return find(dp,n);
    }
};