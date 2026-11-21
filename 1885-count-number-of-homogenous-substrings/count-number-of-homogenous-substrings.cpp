class Solution {
public:
    int countHomogenous(string s) {
       int n=s.size();
       int i=0;
       int j=0;
       long long  count=0;
       long long  len=0;
       long long MOD=1e9+7;
       while(j<n){
         len=(j-i);
        if(s[i]==s[j]){
         j++;
        }
        else{
            count=count+((len*(len+1))/2) % MOD;
            i=j;
        }
       } 
       len=j-i;
        count = (count + (len*(len+1))/2) % MOD;
       return count;
    }
};