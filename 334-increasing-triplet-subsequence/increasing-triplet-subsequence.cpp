class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // if(nums.size()<3) return false;
        // int i=0,j=1,k=2;
        //  while(k<nums.size()){
        //     if(nums[i]<nums[j] && nums[j]<nums[k])
        //     return true;
        //     else{
        //         i++;
        //         j++;
        //         k++;   // galt h subsequence mtlb coninuos 3 nhi hota
        //     }
        //  }
        //     return false;
        // int frst=INT_MAX;
        // int scnd=INT_MAX;
        // int thrd=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     if(frst>nums[i]){
        //         frst=nums[i];
        //         continue;
        //     }
        //     if(nums[i]>frst){
        //         scnd=nums[i];
        //         continue;
        //     }
        //     if(scnd<nums[i]){
        //          thrd=nums[i];
        //          continue;
        //     }
        // }
        // if(frst !=INT_MAX && scnd !=INT_MAX && thrd != INT_MAX){
        // if(frst<scnd &&  scnd<thrd) return true;
        // }
        // return false;     yeh bhi galt h 
        int frst=INT_MAX;
        int scnd=INT_MAX;
        for(int num:nums){
            if(num<=frst)
            frst=num;
            else if(scnd>=num)
            scnd=num;
            else
            return true;
        }
        return false;
    }
};