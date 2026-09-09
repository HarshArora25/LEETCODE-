class Solution {
public:
    bool isValid(string s) {
        string neww="";
        int i=0;
        int n=s.size();
        while(i<n){
          if( !neww.empty() && ((neww.back()=='(' && s[i]==')') || (neww.back()=='{' && s[i]=='}') || (neww.back()=='[' && s[i]==']')) ){
            neww.pop_back();
          }
          else
          neww.push_back(s[i]);
          i++;
        }
        return neww.empty();
    }
};