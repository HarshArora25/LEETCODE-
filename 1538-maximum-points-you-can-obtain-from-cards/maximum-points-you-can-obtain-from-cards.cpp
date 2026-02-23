class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        // int n=nums.size();
    // int i=0;
    // int j=n-1,sum=0;
    //  while(i<=j){
    //     if(nums[i]>nums[j]){
    //       sum+=nums[i];
    //     }
    //     else if(nums[i]<nums[j]){
    //         sum+=nums[j];
    //     }
    //     else{
    //         sum+=nums[i]+nums[j];
    //     }
    //     i++;
    //     j--;
    //  }
    //  return sum;
    // int j=0;
    // int maxi=-1e9;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     int x=k;
    //     while(x--){
    //         if(j==0) sum=nums[0];
    //         else{
    //         sum+=nums[j%n];
    //         }
    //           j++;
    //     }
    //      maxi=max(maxi,sum);
    // }
    // return maxi;

    int lsum=0,rsum=0;
    int n=nums.size()-1;
    int maxi=-1;
    for(int i=0;i<k;i++){
        lsum+=nums[i];
        maxi=max(maxi,lsum);
    }
    for(int i=k-1;i>=0;i--){
        lsum=lsum-nums[i];
        rsum+=nums[n];
        n--;
        maxi=max(maxi,lsum+rsum);
    }
      return maxi;
    }
};