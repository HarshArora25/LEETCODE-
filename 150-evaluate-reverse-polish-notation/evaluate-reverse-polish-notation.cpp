class Solution {
public:
    int evalRPN(vector<string>& s) {
       stack<int>st;
       int n=s.size();

       for(int i=0;i<n;i++){
         if(s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/")
         st.push(stoi(s[i]));
       else{
        int top2=st.top();
        st.pop();
        int top1=st.top();
        st.pop();
        if(s[i]=="+")
        st.push(top1 +top2 );
         else if(s[i]=="-")
         st.push(top1 - top2);
         else if(s[i]=="*")
         st.push(top1 * top2);
         else
         st.push(top1 / top2);
       }
       }
       return st.top();
    }
};