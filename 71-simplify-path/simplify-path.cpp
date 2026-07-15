class Solution {
public:
    string simplifyPath(string path) {
     int n=path.size();
     string ress="";
     stack<string>st;
     for(int i=0;i<n;i++){
        if(path[i]=='/' ) continue;
        string token="";
        while(i<n && path[i] !='/'){
          token+=path[i];
          i++;
        }
        if(token==".") continue;
        else if(token==".."){
            if(!st.empty()) st.pop();
        }
        else{
            st.push(token);
        }
     }   
          if (st.empty()) {
            return "/";
        }

        string result = "";

        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        return result;
    }
};
