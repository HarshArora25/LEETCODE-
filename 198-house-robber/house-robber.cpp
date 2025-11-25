class Solution {
private:
int btaobtao(vector<int>&nums,int n,vector<int>&dp){
    dp[0]=nums[0];
    if(n<0) return 0;
    if(n==0) return nums[0];
    if(dp[n]!=-1) return dp[n];
   int x= nums[n]+btaobtao(nums,n-2,dp);
    int y=btaobtao(nums,n-1,dp);
    return dp[n]=max(x,y);
}
public:
    int rob(vector<int>& nums) {
     int n=nums.size();
     vector<int>dp(n,-1);
      btaobtao(nums,n-1,dp);   
      return dp[n-1];
    }
};