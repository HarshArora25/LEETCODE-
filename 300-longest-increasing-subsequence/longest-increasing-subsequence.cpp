class Solution {
    // int len=0;
private:
     int helpme(vector<int>& nums,int n,int i,int prev ,vector<vector<int>>&dp){
        if(i==n) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int nottake=helpme(nums,n,i+1,prev,dp);   
        int take=0;
        if(prev==-1 || nums[i]>nums[prev])
          take =1+helpme(nums,n,i+1,i,dp);
         return dp[i][prev+1]=max(take,nottake);
     }
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return helpme(nums,n,0,-1,dp); 
         
    }
};