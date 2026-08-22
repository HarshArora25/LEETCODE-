class Solution {
private: 
  bool help(int target, vector<vector<int>>&dp,int idx,vector<int>& nums){
    if(target==0) return true;
   if (idx == 0) return nums[0] == target;
    if(idx<0 || target<0 ) return false;
    if(dp[target][idx] !=-1) return dp[target][idx];
    bool nottake=help(target,dp,idx-1,nums);
    bool take=false;
    if(nums[idx]<=target)
    take=help(target-nums[idx],dp,idx-1,nums);
    return dp[target][idx]=take || nottake;
  }
public:
    bool canPartition(vector<int>& nums) {
       int sum=0;
       int n=nums.size();
       for(auto it:nums)
       sum+=it;
        if(sum % 2 !=0) return false;
        int target=sum/2;
        vector<vector<int>>dp(target+1,vector<int>(n+1,-1));
       return  help(target,dp,n-1,nums);
    }
};