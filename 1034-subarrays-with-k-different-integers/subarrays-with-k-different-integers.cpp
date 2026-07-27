class Solution {
private:
    int diff(vector<int>&nums,int k,int i,int j,int n,unordered_map<int,int>mpp,int count){
    while(j<n){
        mpp[nums[j]]++;
    while(mpp.size()>k){
        mpp[nums[i]]--;
        if(mpp[nums[i]]==0)
        mpp.erase(nums[i]);
    i++;
    }
       count=count+(j-i+1);
       j++;
    }
    return count;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       int i=0,j=0,n=nums.size();
       return diff(nums,k,i,j,n,mpp,0) - diff(nums,k-1,i,j,n,mpp,0); 
    }
};