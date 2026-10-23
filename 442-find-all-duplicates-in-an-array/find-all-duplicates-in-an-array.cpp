class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     vector<int>x;
     for(auto& it:nums){
        int num=abs(it);
        if(nums[num-1]<0)
        x.push_back(abs(num));
        else
        nums[num-1]=-nums[num-1];
             }   
             return x;
    }
};