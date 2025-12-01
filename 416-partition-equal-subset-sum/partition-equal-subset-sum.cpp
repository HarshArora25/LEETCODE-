class Solution {
private:
  bool btabta(vector<int>& nums,int idx,int find, vector<vector<int>>&dp){
    if(find==0) return true;
    if(idx<0) return false;
        if(dp[idx][find] !=-1) return dp[idx][find];
    bool nottake=btabta(nums,idx-1,find,dp);
    bool take=false;
    if(find>=nums[idx]){
        take=btabta(nums,idx-1,find-nums[idx],dp);
    }
    return dp[idx][find]=take || nottake;
  }
public:
    bool canPartition(vector<int>& nums) {
      int idx=nums.size()-1;
      int total=0;
      for(int i=0;i<=idx;i++){
        total+=nums[i];
      }
      if(total%2 !=0) return false;
      vector<vector<int>>dp(idx+1,vector<int>(total/2+1,-1));
    return  btabta(nums,idx,total/2,dp);  
    }
};