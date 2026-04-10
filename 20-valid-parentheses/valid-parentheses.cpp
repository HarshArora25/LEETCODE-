class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(!st.empty() &&((st.top()=='(' && s[i]==')')  ||  (st.top()=='[' && s[i]==']')  || (st.top()=='{' && s[i]=='}')))
            st.pop();
            else
                st.push(s[i]);
        }

            if(st.empty()) return true;
            return false;
    }
};