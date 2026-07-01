class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>elem;
        int count=1;
        // if(n<3) return nums;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
          if(i<n && nums[i-1]==nums[i]){
            count++;
          }
          else{

                if(count > n/3)
                    elem.push_back(nums[i-1]);

                count = 1;
          }
        }
        return elem;
    }
};