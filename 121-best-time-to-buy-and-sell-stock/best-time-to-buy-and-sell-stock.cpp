class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=1e9,maxi=-1e9;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]-mini);
        }
        return maxi;
    }
};