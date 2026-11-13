class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int i=0;
     int j=1;
     vector<int>newarr(nums.size(),0);
     for(auto it:nums){
        if(it>=0){
        newarr[i]=it;
        i+=2;
        }
        else{
        newarr[j]=it;
        j+=2;
        }
     }  
     return newarr;
    }
};