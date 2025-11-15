class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        string x = "";
        stack<char> st;

        for(int i=0; i<n; i++){
            if( (s[i]>='a' && s[i]<='z') || s[i]=='(' ){
                st.push(s[i]);
            }

            else if(s[i] == ')'){

                x = "";
                while(!st.empty() && st.top()!='('){
                    x += st.top();
                    st.pop();
                }

                st.pop();
                for(char c : x){
                    st.push(c);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
