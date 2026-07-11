class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    nums.insert(nums.end(),nums.begin(),nums.end());
     int n=nums.size();
     stack<int>st;
    // int n=nums.size();
    for(int i=n-1;i>=0;i--){
        int x=nums[i];
        while(!st.empty() && st.top()<=nums[i])
        st.pop();
    if(st.empty()) nums[i]=-1;
    else
    nums[i]=st.top();
    st.push(x);
    }
    vector<int>result;
    int sz=n/2;
    for(int i=0;i<sz;i++){
        result.push_back(nums[i]);
    }
    return result;
    }
};