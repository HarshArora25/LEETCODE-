class Solution {
    long long res=0;
    int sign=1;
    void result(string& s,int i,int n){
        if(i>=n || !isdigit(s[i])) return ;
        res=res*10+(s[i]-'0');
        if(sign==1 && res>INT_MAX) return;
        if(sign==-1 && -res<INT_MIN) return;
        result(s,i+1,n); 
    }
public:
    int myAtoi(string s) {
      int n=s.size();
      int i=0;
      while(i<n && s[i]==' ') i++;
      if(i<n && (s[i]=='+' || s[i]=='-')){
        sign=(s[i]=='+')?1:-1;  
        i++;
      }  
      result(s,i,n);
      res=res*sign;
      if(res>INT_MAX) return INT_MAX;
      if(res<INT_MIN) return INT_MIN;
      return (int)res;
    }
};