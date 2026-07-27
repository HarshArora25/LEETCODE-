class Solution {
private:
     int diffrence(vector<int>&nums,int k,int n,int i,int j,int count,int sum){
     while(j<n){
     if(nums[j]%2 !=0){
        count+=1;
     }
     while(count>k){
        if(nums[i] % 2 !=0){
        count--;
        }
        i++;
     }
     sum=sum+j-i+1;
      j++;
     }
     return sum;
     }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      int n=nums.size();
      return diffrence(nums,k,n,0,0,0,0)-diffrence(nums,k-1,n,0,0,0,0);  
    }
};