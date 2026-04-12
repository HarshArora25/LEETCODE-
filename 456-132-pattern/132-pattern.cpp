class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int num3=-1e9;
        int n=nums.size()-1;
        for(int i=n;i>=0;i--){
            if(nums[i]<num3) return true;
            while(!st.empty() && st.top()<nums[i]){
                num3=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};