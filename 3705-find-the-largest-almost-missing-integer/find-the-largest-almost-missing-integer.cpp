// class Solution {
// public:
//     int largestInteger(vector<int>& nums, int k) {
//       vector<int>qty(51,0);
//       int n=nums.size();
//       for(int i=0;i<=n-k;i++){
//         for(int j=i;j<i+k;j++){
//            qty[nums[j]]++;
//         }
//       }
//         int maxi=-1e9;
//         for(int i=50;i>=0;i--){
//             if(qty[i]==1){
//                 return i;
//             }
//         } 
//         return -1;
//     }
// };
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> subarray_count(51, 0);
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            vector<bool> seen(51, false);
            for (int j = i; j < i + k; j++) {
                seen[nums[j]] = true;
            }
            for (int val = 0; val <= 50; val++) {
                if (seen[val]) {
                    subarray_count[val]++;
                }
            }
        }

        for (int i = 50; i >= 0; i--) {
            if (subarray_count[i] == 1) {
                return i;
            }
        }

        return -1;
    }
};