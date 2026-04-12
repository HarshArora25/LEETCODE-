class Solution {
public:
    int maximumGain(string s, int x, int y) {
     int score=0;
     stack<char>st;
     string res="";
     if(x>y){
     for(int i=0;i<s.size();i++){
        if(!st.empty() && st.top()=='a' && s[i]=='b'){
        st.pop();
        score+=x;
        }
        else
        st.push(s[i]);
     }
   
    //  while(!st.empty()){
    //     res=st.top()+res;
    //     st.pop();
    //  }
    while(!st.empty()){
    res += st.top();   // ✅ instead of st.top() + res
    st.pop();
}
reverse(res.begin(), res.end()); // ✅ add this
     for(int i=0;i<res.size();i++){
        if(!st.empty() && st.top()=='b' && res[i]=='a'){
            st.pop();
            score+=y;
        }
        else
        st.push(res[i]);
     }
     }  
     else{
     for(int i=0;i<s.size();i++){
        if(!st.empty() && st.top()=='b' && s[i]=='a'){
        st.pop();
        score+=y;
        }
        else
        st.push(s[i]);
     }
    //  while(!st.empty()){
    //     res=st.top()+res;
    //     st.pop();
    //  }
    while(!st.empty()){
    res += st.top();   // ✅ instead of st.top() + res
    st.pop();
}
reverse(res.begin(), res.end()); // ✅ add this
     for(int i=0;i<res.size();i++){
        if(!st.empty() && st.top()=='a' && res[i]=='b'){
            st.pop();
            score+=x;
        }
        else
        st.push(res[i]);
     }
     }
     return score;
    }
};