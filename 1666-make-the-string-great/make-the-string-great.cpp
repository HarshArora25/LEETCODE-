class Solution {
public:
    string makeGood(string s) {
    stack<char>st;
    if (s.empty()) return "";
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(!st.empty() && abs(s[i]-st.top())==32)
        st.pop();
        else{
            st.push(s[i]);
        }
    }    
    string x="";
    while(!st.empty()){
        x=x+st.top();
        st.pop();
    }
    reverse(x.begin(),x.end());
    return x;
    }
};