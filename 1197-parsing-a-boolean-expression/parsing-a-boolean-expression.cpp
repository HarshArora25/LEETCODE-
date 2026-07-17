class Solution {
    char helpme(char sign,vector<char>& vt,stack<char>&st){
        int i=0;
        int n=vt.size();
        if(sign=='|'){
            while(i<n){
            if(vt[i]=='t') 
            return 't';
            i++;
            }
            return 'f';
        }
        else if(sign=='&'){
            while(i<n){
            if(vt[i]=='f') return 'f';  
            i++;
            }  
            return 't';
        }
        else{
            if(vt[0]=='t') return 'f';
            return 't';
        }
    }
public:
    bool parseBoolExpr(string s) {
      int n =s.size();
      stack<char>st;
      for(char& ch:s){
        if(ch==',')
        continue;
        else if(ch==')'){
            vector<char>vt;
            while(!st.empty() && st.top() !='('){
            if(st.top()=='t'  || st.top()=='f')
            vt.push_back(st.top());
            st.pop();
        }
        st.pop();
        char sign=st.top();
        st.pop();
        char x=helpme(sign,vt,st);
        st.push(x);
        }
        else
        st.push(ch);
      }
      return st.top()=='t';
    }
};