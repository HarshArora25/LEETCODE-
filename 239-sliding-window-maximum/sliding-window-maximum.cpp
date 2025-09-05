class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
                deque<int> d;
        vector<int> ans;

        // vector<int> result;
        // int n = nums.size();

        // for (int i = 0; i <= n - k; i++) {
        //     int maxVal = nums[i];
        //     for (int j = i + 1; j < i + k; j++) {
        //         maxVal = max(maxVal, nums[j]);                  //TLE
        //     }
        //     result.push_back(maxVal);
        // }

        // return result;

        // Process first k-1 elements
        for (int i = 0; i < k - 1; i++) {
            while (!d.empty() && nums[i] > nums[d.back()]) {
                d.pop_back();
            }
            d.push_back(i);
        }

        // Process the rest
        for (int i = k - 1; i < nums.size(); i++) {
            while (!d.empty() && nums[i] > nums[d.back()]) {
                d.pop_back();
            }
            d.push_back(i);

            if (d.front() <= i - k) { 
                d.pop_front(); // remove out-of-window index
            }

            ans.push_back(nums[d.front()]);
        }

        return ans;
    }
};
