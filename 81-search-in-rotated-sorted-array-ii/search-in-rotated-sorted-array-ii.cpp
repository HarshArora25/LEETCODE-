class Solution {
public:
    bool search(vector<int>& nums, int target) {
      int n=nums.size();
      int low=0;
      int high=n-1;
      int pos=-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return true;
        else if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
        else if(nums[low]<=nums[mid]){
            if(nums[mid]>target && nums[low]<=target)
            high=mid-1;
            else
            low=mid+1;
        }
        else{
            if(nums[mid]<target && nums[high]>=target)
            low=mid+1;
            else
            high=mid-1;
        }
      }
        
     return false;
    }
};
   