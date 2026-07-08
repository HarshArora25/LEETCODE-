class Solution {
public:
    string makeGood(string s) {
      string ress="";
      int n=s.size();
      for(int i=0;i<n;i++){
        if(i>0 && !ress.empty() &&abs(ress.back()-s[i])==32){
        ress.pop_back();
        continue;
      }
      ress.push_back(s[i]);
      }  
      return ress;
    }
};