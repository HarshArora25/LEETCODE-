class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       stack<string>st;
       int j=0;
       for(int i=1;i<=n && j<target.size();i++){
        if(target[j]==i){
        st.push("Push");
        j++;}
        else{
            st.push("Push");
            st.push("Pop");
        }
       } 
      vector<string>ans;
      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};