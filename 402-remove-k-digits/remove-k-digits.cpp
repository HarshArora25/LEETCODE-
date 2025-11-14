class Solution {
public:
    string removeKdigits(string num, int k) {
      stack<char>st;
      if(num.size()==k) return "0";
      for(int i=0;i<num.size();i++){
        while(!st.empty() && st.top()>num[i] && k!=0){
        st.pop();
        k--;
        }
        st.push(num[i]);
      }  
      while(!st.empty() && k>0){
        st.pop();
        k--;
      }
      string x="";
      while(!st.empty()){
        x+=st.top();
        st.pop();
      }
    //   if(x[0] !='0' && x[x.size()-1]){    yeh dikkt krra h case 
    //   while(!x.empty() && x.back()=='0') x.pop_back();
    //   }
      reverse(x.begin(),x.end());

     int idx = 0;
        while (idx < x.size() && x[idx] == '0') idx++;

        string ans = x.substr(idx);

        return ans == "" ? "0" : ans;
    }
};