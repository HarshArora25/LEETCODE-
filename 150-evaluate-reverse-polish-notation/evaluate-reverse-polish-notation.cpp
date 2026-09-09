class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"){
                int frst=st.top();
                st.pop();
                int scnd=st.top();
                st.pop();
                int thrd=frst+scnd;
                st.push(thrd);
            }
            else if(tokens[i]=="-"){
                int frst=st.top();
                st.pop();
                int scnd=st.top();
                st.pop();
                int thrd=scnd-frst;
                st.push(thrd);
            }

            else if(tokens[i]=="*"){
                int frst=st.top();
                st.pop();
                int scnd=st.top();
                st.pop();
                int thrd=frst*scnd;
                st.push(thrd);
            }

            else if(tokens[i]=="/"){
                int frst=st.top();
                st.pop();
                int scnd=st.top();
                st.pop();
                int thrd=scnd/frst;
                st.push(thrd);
            }
            else
            st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};