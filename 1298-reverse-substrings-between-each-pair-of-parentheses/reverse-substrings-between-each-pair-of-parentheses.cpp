class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++){
            string res="";
           if(s[i]==')'){
            while(!st.empty() && st.top() !="("){
                res+=st.top();
                st.pop();
            }
            reverse(res.begin(),res.end());
            st.pop();
            st.push(res);
           }
           else
           st.push(string(1,s[i]));
        }
        string ans="";
         while(!st.empty()){
          ans+=st.top();
          st.pop();
         }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};