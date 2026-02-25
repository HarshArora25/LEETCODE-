class Solution {
    private:
    int find(int i,int j,int n,int sum,vector<int>&nums,int goal,int count){
          if(goal<0) return 0;
        while(j<n){
         sum+=nums[j]%2;
         while(sum>goal){
            sum=sum-nums[i]%2;
            i++;
         }
        //  if(sum<=count)
         count= count+(j-i+1);
         j++;
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
        // int i=0,j=0,n=nums.size();
          int i=0;
          int j=0;
          int n=nums.size();
          int sum=0;
          int count=0;
          return find(i,j,n,sum,nums,goal,count) - find(i,j,n,sum,nums,goal-1,count) ;
    }
};