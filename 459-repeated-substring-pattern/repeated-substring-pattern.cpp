class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
      for(int k=n/2;k>0;k--){
        if(n%k==0){
            int time=n/k;
            string a="";
            string b=s.substr(0,k);
            while(time){
               a+=b;
               time--;
            }
            if(a==s)
            return true;
        }
      }  
      return false;
    }
};