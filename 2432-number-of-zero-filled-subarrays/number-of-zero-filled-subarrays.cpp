class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long x=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
            count++;
          }
          else{
            x=x+(count*(count+1)/2);
            count=0;
          }
        }
         x=x+(count*(count+1)/2);
        return x;
    }
};
// formula h n*n+1/2