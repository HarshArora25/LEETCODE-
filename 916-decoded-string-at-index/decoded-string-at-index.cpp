class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n=s.size();
    long long len=0;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            len=len+1;
        }
        else{
            len=len*(s[i]-'0');
        }
    }
     int j=s.size()-1;

      for(int i=n-1;i>=0;i--){
        k=k%len;
        if(k==0 && isalpha(s[i])){
            return string(1,s[i]);
        }
        if(isalpha(s[i])){
            len=len-1;
        }
        else{
          len=len/(s[i]-'0');
        }
      }
      return "";
    }
};