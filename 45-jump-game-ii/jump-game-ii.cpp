class Solution {
public:
    int jump(vector<int>& nums) {
      int left=0,right=0;
      int n=nums.size();
       int jump=0;
      while(right<n-1) {
            int count=0;
        for(int i=left;i<=right;i++){

          count=max(i+nums[i],count);

        }
        left=right+1;
        right=count;
        jump+=1;
      }
 return jump;
    }
};