class Solution {
public:
    bool isSubsequence(string s, string t) {
      int i=0;
      int j=0;
      int n=t.size();
      while(j<n){
        if(s[i]==t[j]){
            i++;
        }
        j++;
      }  
      if(i==s.size()) return true;
      return false;
    }
};