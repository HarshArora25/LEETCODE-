class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int lastidx=0,maxi=0;
        vector<int>dp(n,1),hash(n,0);
        for(int idx=0;idx<n;idx++){
            hash[idx]=idx;
        for(int j=0;j<idx;j++){
            if(nums[idx]%nums[j]==0 && 1+dp[j]>dp[idx]){
                dp[idx]=1+dp[j];
                hash[idx]=j;
            }
        }
          if(dp[idx]>maxi){
            maxi=dp[idx];
            lastidx=idx;
          }
        }
        vector<int>temp;
        temp.push_back(nums[lastidx]);
        while(hash[lastidx]!=lastidx){
            lastidx=hash[lastidx];
            temp.push_back(nums[lastidx]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};