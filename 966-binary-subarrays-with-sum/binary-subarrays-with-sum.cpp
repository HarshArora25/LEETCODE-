class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      int n=nums.size();
      unordered_map<int,int>mpp;
      vector<int>prefix(n,0);
      long long sum=0,count=0;
      mpp[0]=1;
      for(int i=0;i<n;i++){
       sum+=nums[i];
       int diff=sum-goal;
       if(mpp.find(diff) !=mpp.end())
        count+=mpp[diff];
        mpp[sum]++;
      }
      return count;
    }
};