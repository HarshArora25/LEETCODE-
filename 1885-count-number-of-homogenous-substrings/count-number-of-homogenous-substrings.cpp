class Solution {
public:
    int countHomogenous(string s) {
      long long int  count=1,a=0,n=0;
       long long mod = 1e9 + 7;
      for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
        count++;
      }  
      else{
         n=count*(count+1)/2% mod;
        a=a+n; 
        count=1;
      }
      }
      a=a+count*(count+1)/2 % mod;
      return a;
    }
};