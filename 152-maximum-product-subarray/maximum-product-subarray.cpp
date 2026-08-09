class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=-1e9;
        int presum=1,postsum=1;
        for(int i=0;i<n;i++){
         if(presum==0){
            presum=1;
         }
         if(postsum==0){
            postsum=1;
         }
         presum=presum*nums[i];
         postsum=postsum*nums[n-i-1];
         maxi=max({maxi,postsum,presum});
        }
        // if(maxi<0) return -1;
         return maxi;
    }
};