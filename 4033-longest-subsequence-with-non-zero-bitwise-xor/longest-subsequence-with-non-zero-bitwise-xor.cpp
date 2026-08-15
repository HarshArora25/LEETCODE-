class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        int n=nums.size();
        int i=0;
        int count=0;
        while(i<n){
              if(nums[i] !=0 ) count++;
            xr=xr^nums[i];
            i++;
        }
        if(xr==0 && count>0) return n-1;
        else if(xr !=0) return n;
        else return 0;
    }
};