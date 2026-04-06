class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      int n=nums.size();
      stack<int>st;
      for(int i=2*n-1;i>=0;i--){
       int elem=nums[i%n];

       while(!st.empty() && st.top()<=nums[i%n])
       st.pop();
       if(i<n){
       if(st.empty()) nums[i]=-1;
       else nums[i]=st.top();
      }
      st.push(elem);
      }
      return nums;
    }
};