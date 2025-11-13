class Solution {
public:
    string simplifyPath(string path) {
      stack<string>st;
      stringstream ss(path);
      string token="";
      while(getline(ss,token,'/')){
        if(token=="" || token==".")
        continue;
        if(token !="..")
        st.push(token);
        else{
      if(!st.empty())
       st.pop();
        }
      }
      string x="";
      while(!st.empty()){
        x=  '/'+ st.top()+ x;
        st.pop();
      }
         return x.empty() ? "/" : x;
    }
};