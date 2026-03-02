class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1,suff=1;
        int n=nums.size();
        int maxi=-1e9;
        for(int i=0;i<n;i++){
            if(!pref) pref=1;
            if(!suff) suff=1;
            pref=pref*nums[i];
            suff=suff*nums[n-i-1];
            maxi=max({maxi,pref,suff});
        }
        return maxi;
    }
};