class Solution {
private:
    void helper(vector<vector<int>>&ans,int n,vector<int>&nums,vector<int>&x,int i){
        if(i==n){ans.push_back(x); return ; }
        x.push_back(nums[i]);
        helper(ans,n,nums,x,i+1);
        x.pop_back();
        helper(ans,n,nums,x,i+1);
        return ;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       int n=nums.size();
       vector<int>x;
       helper(ans,n,nums,x,0);
       return ans;
    }
};