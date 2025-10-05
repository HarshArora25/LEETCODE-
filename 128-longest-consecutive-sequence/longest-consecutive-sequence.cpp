class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int count=1,largest=INT_MIN;
      if(nums.size()==0) return 0;
      unordered_set<int>st;
      for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
      }  
      for(auto it:st){
        if(st.find(it-1)==st.end()){
          count=1;
          int x=it;
          while(st.find(x+1) !=st.end()){
            count++;
            x=x+1;
          }
          largest=max(largest,count);
        }
      }
      return largest;
    }
};