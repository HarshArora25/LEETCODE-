class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
      int i=0,l=0,r=0;
      int n=s.size();
      string answ(n,' ');
      while(i<n){
        while(i<n && s[i]==' ') i++;
        if(i>=n) break;
        if(r!=0){
            answ+=" ";
            r++;
        }
        l=r;
      while(i<n && s[i] !=' '){
       answ[r++]=s[i++];
      }
      reverse(answ.begin()+l,answ.begin()+r);
      }
      answ.resize(r);
      return answ;
    }
};