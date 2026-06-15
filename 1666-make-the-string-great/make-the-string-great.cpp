class Solution {
public:
    string makeGood(string s) {
       stack<char>st;
       int i=0;
       int n=s.size();
    for(int i=0;i<n;i++){
        int flag=0;
        if(!st.empty() && abs(st.top()-s[i]) ==32){
            st.pop();
            flag=1;
        }
        if(flag) continue;
        st.push(s[i]);
    }
     string res="";
     while(!st.empty()){
        res=res+st.top();
        st.pop();
     }
     reverse(res.begin(),res.end());
     return res;
    }
};