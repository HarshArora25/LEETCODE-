class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int zeroes=0;
      int n=nums.size();
      int i=0,j=0,maxi=0;
      while(j<nums.size()){
        if(nums[j]==0) zeroes++;
        while(zeroes>k){
            if(nums[i]==0)
            zeroes--;
            i++;
        }
        maxi=max(maxi,j-i+1);
        j++;
      }
      return maxi;
    }
};