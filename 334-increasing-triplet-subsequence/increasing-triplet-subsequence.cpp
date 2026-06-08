class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
      vector<int>leftmini(n),rightmaxi(n);
      int mini=1e9;
      for(int i=0;i<n;i++){
         mini=min(mini,nums[i]);
        leftmini[i]=mini;
      }
      int maxi=-1e9;
      for(int i=n-1;i>=0;i--){
        maxi=max(maxi,nums[i]);
        rightmaxi[i]=maxi;
      }
      for(int i=1;i<n-1;i++){
        if(leftmini[i-1]<nums[i] && rightmaxi[i+1]>nums[i])
        return true;
      }
      return false;
    }
};