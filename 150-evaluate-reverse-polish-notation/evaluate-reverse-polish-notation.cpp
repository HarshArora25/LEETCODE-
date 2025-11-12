class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;  
        for (int i = 0; i < tokens.size(); i++) {
            string s = tokens[i];
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                long long a = st.top(); st.pop();
                long long b = st.top(); st.pop();
                long long x = 0;
                if (s == "+") x = b + a;
                else if (s == "-") x = b - a;
                else if (s == "*") x = b * a;
                else if (s == "/") x = b / a;

                st.push(x);
            } 
            else {
                st.push(stoll(s)); 
            }
        }

        return st.top(); 
    }
};
