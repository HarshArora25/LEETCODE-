class Solution {
private:
    void subsett(vector<vector<int>>& ans, vector<int>& temp, int index, vector<int>& nums) {
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        subsett(ans, temp, index + 1, nums);
        temp.pop_back();
        int x = index + 1;
        while (x < nums.size() && nums[x] == nums[index]) {
            x++;
        }

        subsett(ans, temp, x, nums);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;
        vector<int> temp;
        subsett(ans, temp, 0, nums);
        return ans;
    }
};
