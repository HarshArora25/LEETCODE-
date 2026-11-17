class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int n=nums.size();
       int count=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       int pfx=0;
       for(auto& it:nums){
        pfx+=it;
        int diff=pfx-goal;
        if(mpp.find(diff) !=mpp.end())
        count+=mpp[diff];
        mpp[pfx]++;
       }
       return count; 
    }
};