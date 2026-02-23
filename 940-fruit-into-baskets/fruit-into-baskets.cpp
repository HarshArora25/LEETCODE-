class Solution {
public:
    int totalFruit(vector<int>& nums) {
     int i=0,j=0;
     int maxi=0;
     unordered_map<int,int>mpp;
     
    while(j<nums.size()){
     mpp[nums[j]]++;
     while(mpp.size()>2){
        mpp[nums[i]]--;
        if(mpp[nums[i]]==0){
            mpp.erase(nums[i]);
        }
        i++;
     } 
     if(mpp.size()<=2){
       maxi=max(maxi,j-i+1);
     }
     j++;
    }
    return maxi;
    }
};