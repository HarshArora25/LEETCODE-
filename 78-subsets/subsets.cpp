class Solution {
public:
    void subsequence(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int index, int size) {
        if (index == size) {
            ans.push_back(temp);
            return;
        }

        
        subsequence(nums, temp, ans, index + 1, size);
        temp.push_back(nums[index]);
        subsequence(nums, temp, ans, index + 1, size);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;   
        int size = nums.size();
        subsequence(nums, temp, ans, 0, size);
        return ans;
    }
};
