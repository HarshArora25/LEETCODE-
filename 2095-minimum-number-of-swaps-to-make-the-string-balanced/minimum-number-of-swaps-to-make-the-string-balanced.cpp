class Solution {
public:
    int minSwaps(string s) {
     stack<char>st;
     for(char& c:s){
        if(c=='[')
        st.push(c);
        else if(!st.empty())
        st.pop(); 
     }
     // size of stack is no of open bracket
     return (st.size()+1)/2;
    }
};