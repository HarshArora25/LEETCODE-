class Solution {
    private:
    int helper(vector<int>&nums,int &sum,int i,vector<int>&dp){
      if(i==0) return nums[0];
      if(i==1) return max(nums[0],nums[i]);
        if (dp[i] != -1) return dp[i];
      dp[i]=max((nums[i]+helper(nums,sum,i-2,dp)),helper(nums,sum,i-1,dp));
      return dp[i];
    }
public:
    int rob(vector<int>& nums) {
      int sum=0;
      if(nums.size()==1) return nums[0];
      int n=nums.size();
      int i=nums.size()-2;
      vector<int>dp1(n+1,-1);
      vector<int>dp2(n+1,-1);
      vector<int>a(nums.begin()+1,nums.end());
      vector<int>b(nums.begin(),nums.end()-1);
     return max(helper(a,sum,i,dp1), helper(b,sum,i,dp2));  
    }
};