class Solution {
    private:
    void helper( vector<vector<int>>&ans,vector<int> nums,int index,int n){
        if(index==n){
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<n;i++){
            swap(nums[i],nums[index]);
            helper(ans,nums,index+1,n);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       int n=nums.size();
       helper(ans,nums,0,n);
       return ans;
    }
};