class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
      int left=0;
      int right=0;
      vector<int>x;
      while(right<n){
        if(nums[left]==nums[right])
        right++;
        else{
        x.push_back(nums[left]);
        left=right;
        }
      } 
      x.push_back(nums[left]);
      nums=x;
      return x.size();
    }
};