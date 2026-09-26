class Solution {
private:
    void helpme(vector<vector<int>>&ans,vector<int>&res,int idx,int n,vector<int>& nums){
        if(idx==n){
            ans.push_back(res);
            return ;
        }
        res.push_back(nums[idx]);
        helpme(ans,res,idx+1,n,nums);
        res.pop_back();
        while(idx<n-1 && nums[idx]==nums[idx+1])
        idx++;
         helpme(ans,res,idx+1,n,nums);
         return ;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int idx=0;
       vector<vector<int>>ans;
       vector<int>res;
       helpme(ans,res,idx,n,nums);  
       return ans;
    }
};