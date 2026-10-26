
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ']') {
                st.push(string(1, s[i]));
            } else {
                string temp = "";

                while (!st.empty() && st.top() != "[") {
                    temp = st.top() + temp;
                    st.pop();
                }

                st.pop(); 

                string num = "";
                while (!st.empty() && isdigit(st.top()[0])) {
                    num = st.top() + num;
                    st.pop();
                }

                int times = stoi(num);
                string decoded = "";

                for (int j = 0; j < times; j++) {
                    decoded += temp;
                }

                st.push(decoded);
            }
        }

        string res = "";
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};
