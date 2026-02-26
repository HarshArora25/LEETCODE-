class Solution {
private:
      int help(vector<int>&nums,int k){
        int i=0;
        int j=0;
        int n=nums.size();
        unordered_map<int,int>mpp;
        int count=0;
        while(j<n){
         mpp[nums[j]]++;
         while(mpp.size()>k){
            mpp[nums[i]]--;
            if(mpp[nums[i]]==0) mpp.erase(nums[i]);
            i++;
         }
         count=count+(j-i+1);
         j++;
        }
        return count;
      }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return (help(nums,k)- help(nums,k-1)); 
    }
};