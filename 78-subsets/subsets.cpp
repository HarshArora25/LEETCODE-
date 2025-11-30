class Solution {
    private:
    void sub(vector<vector<int>>&x,vector<int>& nums,int idx, vector<int>&y){
        if(idx<0){
        x.push_back(y);
        return ;
        }
         y.push_back(nums[idx]);
        sub(x,nums,idx-1,y);
         y.pop_back();
        sub(x,nums,idx-1,y);
        
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>x;
     int idx=nums.size()-1;
      vector<int>y;
     sub(x,nums,idx,y);
     return x;
    }
};