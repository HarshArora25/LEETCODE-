class Solution {
    private:
    int helper(vector<int>&nums,int i,vector<int>&dp){
      if(i==0) return nums[0];
      if(i==1) return max(nums[0],nums[i]);
        if (dp[i] != -1) return dp[i];
      dp[i]=max((nums[i]+helper(nums,i-2,dp)),helper(nums,i-1,dp));
      return dp[i];
    }
public:
    int rob(vector<int>& nums) {
      int sum=0;
      if(nums.size()==1) return nums[0];
      int i=nums.size()-1;
      vector<int>dp1(i+1,-1);
        vector<int>dp2(i+1,-1);
      vector<int>a(nums.begin()+1,nums.end());
      vector<int>b(nums.begin(),nums.end()-1);
     int x=helper(a,i-1,dp1);  
     int y=helper(b,i-1,dp2);
      return max(x,y); 
    }
};