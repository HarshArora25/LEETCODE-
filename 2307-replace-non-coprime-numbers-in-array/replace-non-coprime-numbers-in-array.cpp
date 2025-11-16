class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
      vector<int>result;
      for(long long num: nums){
         while(!result.empty()){
            long long prev=result.back();
            long long curr=num;
            long long GCD=gcd(prev,curr);
            if(GCD==1) break;
            result.pop_back();
            num = (prev / GCD) * num; 
         }
         result.push_back(num);
      }  
      return result;
    }
};