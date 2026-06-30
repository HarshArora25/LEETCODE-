class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefix=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            prefix+=nums[i];
            if(mpp.count(prefix-k)){
                sum+=mpp[prefix-k];
            }
            mpp[prefix]++;
        }
        return sum;
    }
};