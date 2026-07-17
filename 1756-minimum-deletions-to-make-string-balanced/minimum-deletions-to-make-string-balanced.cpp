class Solution {
public:
    int minimumDeletions(string s) {
     int count=0;
     int n=s.size();
     stack<char>st;
     for(int i=0;i<n;i++){
    //   if(st.empty()) st.push(s[i]);
      if(!st.empty() && st.top()=='b' && s[i]=='a'){
      st.pop();
      count++;
      continue;
      }
      st.push(s[i]);
     }   
    return count;
    }
};