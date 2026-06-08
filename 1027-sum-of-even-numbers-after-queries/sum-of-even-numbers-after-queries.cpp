class Solution {
    private:
    int even(vector<int>&nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]%2==0)
           sum=sum+nums[i];
        }
        return sum;
    }
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
     int n=queries.size();
     vector<int>vec;
     for(int i=0;i<n;i++){
        int add=queries[i][0];
        int idx=queries[i][1];
        nums[idx]=nums[idx]+add;
        int x=even(nums);
        vec.push_back(x);
     }   
     return vec;
    }
};