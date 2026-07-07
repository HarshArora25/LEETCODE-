class Solution {
public:
    int countHomogenous(string s) {
      int n=s.size();
      long long MOD=1e9+7;
      long long ans=0;
      int i=0;
      while(i<n){
        int j=i;
        while(j<n && s[i]==s[j])
        j++;
        long long len=j-i;
        ans=ans+((len*(len+1))/2);
        i=j;
      }  
       return ans  % MOD;
    }
};