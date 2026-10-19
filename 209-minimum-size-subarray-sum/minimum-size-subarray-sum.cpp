class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=1e9;
        int n=nums.size();
        int left=0;
        int sum=0;
        for(int right=0;right<n;right++){
          sum+=nums[right];
          while(sum>=target){
             mini=min(mini,right-left+1);
            sum-=nums[left];
            left++;
          }
        }
        return mini==1e9?0:mini;
    }
};