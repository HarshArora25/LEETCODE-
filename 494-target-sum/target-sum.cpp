class Solution {
public:
    int helper(vector<int>& nums,int find,int n){
        if(n==0){
            if(find==0 && nums[0]==0) return 2;
            if(find==0 || find==nums[0]) return 1;
           return 0;
        }
        int nottake=helper(nums,find,n-1);
        int take=0;
        if(nums[n]<=find)
        take=helper(nums,find-nums[n],n-1);
        return take+nottake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
        totsum+=nums[i];
        }
        if(target > totsum || (totsum - target) % 2 != 0) return 0;
        int find=(totsum-target)/2;
       return helper(nums,find,n-1);
    }
};