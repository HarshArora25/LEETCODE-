class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=0,maxisum=INT_MIN;
     for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>maxisum)
        maxisum=sum;
          maxisum=max(maxisum,sum);
        if(sum<0){
            sum=0;
        }
     }   
     return maxisum;
    }
};