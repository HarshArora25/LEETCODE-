class Solution {
public:
 char solveexpression(vector<char>&values,char operat){
    if(operat=='!'){
        return values[0]=='t'?'f':'t';
    }
    if(operat=='&'){
        for(char& ch:values){
            if(ch=='f')
            return 'f';
        }
         return 't';
    }
    if(operat == '|') {
            for(char& ch : values) {
                if(ch == 't') return 't';
            }
            return 'f';
        }

        return 't'; // fallback
 }
    bool parseBoolExpr(string expression) {
        stack<char>st;
       for(int i=0;i<expression.size();i++){
        if(expression[i]==',')
        continue;
        else if(expression[i]==')'){
            vector<char>vt;
            while(st.top() !='('){
                vt.push_back(st.top());
                st.pop();
            }
            st.pop();
            char operat=st.top();
            st.pop();
            st.push(solveexpression(vt,operat));
        }
         else
         st.push(expression[i]);
       } 
       return st.top()=='t';
    }
};