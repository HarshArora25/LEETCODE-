class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int pref=1,suff=1,maxi=INT_MIN;
       for(int i=0;i<nums.size();i++){
       if(!pref) pref=1;
       if(!suff) suff=1; 
       pref=pref*nums[i];
       suff=suff*nums[nums.size()-i-1];
       maxi=max(maxi,max(pref,suff));
           }
           return maxi;
           }
};