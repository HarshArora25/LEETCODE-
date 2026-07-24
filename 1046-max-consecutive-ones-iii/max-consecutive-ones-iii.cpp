class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int n=nums.size();
    int zeroes=0;
    int j=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)
        zeroes++;
        while(zeroes>k){
         if(nums[j]==0)
         zeroes--;
         j++;
        }
        maxi=max(maxi,i-j+1);
    } 
    return maxi;
    }
};