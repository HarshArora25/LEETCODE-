class Solution {
private:
   int sumdigit(int x,int& sum){
     if(x==0) return sum;
     sum=sum+x%10;
     return sumdigit(x/10,sum);
   }
public:
    int smallestIndex(vector<int>& nums) {
     int n=nums.size();
     for(int i=0;i<n;i++){
         int sum=0;
        if(i==sumdigit(nums[i],sum))
        return i;
     }
     return -1;
    }
};