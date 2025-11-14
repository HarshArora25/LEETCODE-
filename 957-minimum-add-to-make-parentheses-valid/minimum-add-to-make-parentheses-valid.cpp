class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     if(!st.empty() && st.top()=='(' && s[i]==')')
        //     st.pop();
        //     else
        //     st.push(s[i]);
        // }
        // return st.size();

        // O(1) space 
        int open=0,close=0;
        for(char& c:s){
            if(c=='(')
            open++;
            else{
                if(open>0)
                open--;
                else
                close++;
            }
        }
        return open+close;;
    }
};