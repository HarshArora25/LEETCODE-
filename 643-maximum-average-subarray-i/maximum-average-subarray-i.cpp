class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=-1e9,sum=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            if(right-left==k-1){
               maxi=max(maxi,sum/k);
               sum-=nums[left];
               left++;
            }
        }
        // if(maxi<0) return 0.00000;
        return maxi;
    }
};