class Solution {
public:
    void merge(vector<int>& nums, int m, vector<int>& nums2, int n) {
        //  O(1) SPACE AND TIME O(N)
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums[i]>nums2[j]){
                nums[k]=nums[i];
                i--;
            }
            else{
                nums[k]=nums2[j];
                j--;
            }
            k--;
        }
        while(j>=0){
         nums[j]=nums2[j];
         j--;
        }
    }
};