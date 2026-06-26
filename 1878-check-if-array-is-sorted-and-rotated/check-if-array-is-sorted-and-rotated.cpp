class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>y=nums;
       vector<int>x(nums.begin(),nums.end());
       sort(x.begin(),x.end());
       int n=nums.size();
       for(int i=0;i<n;i++){
        rotate(nums.begin(),nums.begin()+i,nums.end());
        rotate(nums.begin()+i,nums.end(),nums.end());
        if(nums==x)
        return true;
        nums=y;
       } 
       return false;
    }
};