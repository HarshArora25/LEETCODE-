class Solution {
public:
    bool isValid(string s) {
      int n=s.size();
      string neww="";
      for(int i=0;i<n;i++){
        if( !neww.empty() && neww.back()=='(' && s[i]==')')
        neww.pop_back(); 
      else if( !neww.empty() && neww.back()=='[' && s[i]==']')
        neww.pop_back();
     else if( !neww.empty() && neww.back()=='{' && s[i]=='}')
        neww.pop_back();
      else
      neww.push_back(s[i]);
      }
      if(neww.empty()) return true;
      return false;
    }
};