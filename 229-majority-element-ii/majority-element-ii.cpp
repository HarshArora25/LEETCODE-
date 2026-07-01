class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cd=0;
        int cd2=0;
        int ct=0;
        int ct2=0;
        for(int num:nums){
            if(num==cd)
            ct++;
            else if(num==cd2)
            ct2++;
            else if(ct==0){
                cd=num;
                ct++;
            }
            else if(ct2==0){
                cd2=num;
                ct2++;
            }
            else{
                ct--;
                ct2--;
            }
        }
         ct=0,ct2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==cd)
            ct++;
            else if(nums[i]==cd2)
            ct2++;
        }
        if(ct>n/3 && ct2>n/3) return {cd,cd2};
        else if(ct>n/3) return {cd};
        else if(ct2>n/3) return {cd2};
        else return{};
    }
};