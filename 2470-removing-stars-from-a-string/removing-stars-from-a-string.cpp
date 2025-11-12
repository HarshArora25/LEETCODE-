class Solution {
public:
    string removeStars(string s) {
     stack<char>st;
     for(int i=0;i<s.size();i++){
        if(!st.empty() && s[i]=='*'){
          st.pop();  
        }
        else{
            st.push(s[i]);
        }
     }   
     string a="";
     while(!st.empty()){
        a+=st.top();
        st.pop();
     }
     reverse(a.begin(),a.end());
     return a;
    }
};