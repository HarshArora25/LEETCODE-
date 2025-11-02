class Solution {
public:
    int search(vector<int>& nums, int k) {
              int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == k) 
                return mid;

            // Left half sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= k && nums[mid] > k)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // Right half sorted
            else {
                if (nums[mid] < k && nums[high] >= k)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};