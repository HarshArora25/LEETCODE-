class Solution {
public:
    int scoreOfParentheses(string s) {
      stack<int>st;
      int i=0;
      int n=s.size();
      int sum=0;
      while(i<n){
       if(s[i]=='('){
        st.push(0);
       }
       else{
       int top=st.top();
       st.pop();
       if(top==0)
       st.push(1);
       else
       st.push(2*top);
       if(st.size()>=2){
        int top1=st.top();
        st.pop();
        int top2=st.top();
        st.pop();
        st.push(top1+top2);
       }
       }
       i++;
      } 
     
      return st.top();
    }
};