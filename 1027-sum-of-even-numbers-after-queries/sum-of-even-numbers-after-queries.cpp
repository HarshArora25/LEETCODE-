class Solution {
    private:
    void sums(vector<int>&nums,vector<int>&y){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            //  sum=0;
            if(nums[i]%2==0)
          sum+=nums[i];
        }
        y.push_back(sum);
    }
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>y;
        for(int i=0;i<queries.size();i++){
            int sum=0;
           nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
           sums(nums,y);
        }
        return y;
    }
};