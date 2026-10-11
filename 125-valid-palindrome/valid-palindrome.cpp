class Solution {
private:
    bool ispallindrom(string& x){
        string y=x;
        reverse(y.begin(),y.end());
        return x==y;
    }
public:
    bool isPalindrome(string s) {
      int n=s.size();
      string x="";
      for(auto& it: s){
        if( (it>='a' && it<='z') || (it>='A' && it<='Z') ||  (it >= '0' && it <= '9')){
            x+=tolower(it);
        }
      }  
      return ispallindrom(x);
    }
};