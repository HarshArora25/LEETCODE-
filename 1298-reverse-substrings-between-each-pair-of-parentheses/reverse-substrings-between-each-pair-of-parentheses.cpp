class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string x;
        for(int i=0;i<s.size();i++){
            x="";
            if(!st.empty() && s[i]==')'){
                while(st.top() !='('){
                x+=st.top();
                st.pop();
                }
                st.pop();
            }
            int l=0;
            while(l<x.size()){
                st.push(x[l]);
                l++;
            }
            if(s[i] !=')')
            st.push(s[i]);
        }
       string ans="";
        while(!st.empty()){
         ans=ans+st.top();
         st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};