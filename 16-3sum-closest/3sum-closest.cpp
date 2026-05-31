class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     int n=nums.size();
     int closest=100000;
     for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
      while(left<right){
        int sum=nums[i]+nums[left]+nums[right];
        if(abs(sum-target)<abs(closest-target))
        closest=sum;
        if(sum<target)
        left++;
        else if(sum>target) 
        right--;
        else
        return sum;
      }
     }  
     return closest;
    }
};