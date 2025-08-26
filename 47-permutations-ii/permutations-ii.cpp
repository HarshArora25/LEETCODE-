class Solution {
    private:
    void dups(vector<vector<int>>&ans,int index,int n,vector<int>&nums){
        if(index==n){
            ans.push_back(nums);
            return;
        }
        vector<int>use(21,0);
        for(int i=index;i<n;i++){
            if(use[nums[i]+10]==0){
                swap(nums[i],nums[index]);
                 dups(ans,index+1,n,nums);
                 swap(nums[i],nums[index]); 
                 use[nums[i]+10]=1;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>>ans;
       int n=nums.size();
       dups(ans,0,n,nums); 
       return ans;
    }
};