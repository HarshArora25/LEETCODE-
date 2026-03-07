class Solution {
public:
    int myAtoi(string s) {
       int i=0;
       int n=s.size();
       while(i<n  && s[i]==' ')
       i++;
       if(i==n) return 0;

       int sign =1;
       if(s[i]=='+'){
       sign=1;
       i++;
       }
       else if(s[i]=='-'){
       sign=-1;
       i++; 
       }
        long long  res=0;
      while(i<n && isdigit(s[i])){
        int digit=s[i]-'0';
        res=res*10+digit;
          if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            i++;
      }
    //   if(res*sign>=INT_MAX) return INT_MAX;  // bhar nhi andr hi check krna pdega
    //   if(res*sign<=INT_MIN) return INT_MIN;
      return res*sign;
    }
};