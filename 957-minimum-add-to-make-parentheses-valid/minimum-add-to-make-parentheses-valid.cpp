class Solution {
public:
    int minAddToMakeValid(string s) {
      int n=s.size();
      int count=0;
      string res="";
      for(int i=0;i<n;i++){
        if(res.empty())
        res.push_back(s[i]);
        else if(res.back()=='(' && s[i]==')')
        res.pop_back();
        else
        res.push_back(s[i]);
      }  
      return res.size();
    }
};