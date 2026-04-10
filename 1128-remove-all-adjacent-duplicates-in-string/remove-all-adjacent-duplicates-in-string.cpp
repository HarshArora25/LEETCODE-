class Solution {
public:
    string removeDuplicates(string s) {
       int n=s.size();
       stack<char>st;
       for(int i=0;i<n;i++){
        //   char ch=s[i];
           while(!st.empty() && i<n && st.top()==s[i]){
          st.pop();
          i++;
          }
         if(i<n) st.push(s[i]);
       } 
       string res="";
       while(!st.empty()){
        res=st.top()+res;
        st.pop();
       }
       return res;
    }
};