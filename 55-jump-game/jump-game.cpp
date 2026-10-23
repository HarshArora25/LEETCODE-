class Solution {
public:
    bool canJump(vector<int>& nums) {
     int n=nums.size();
     int maxu=0;
     for(int i=0;i<n;i++){
      if(i>maxu) return false;
      else{
        maxu=max(maxu,nums[i]+i);
      }
     }   
     return true;
    }
};