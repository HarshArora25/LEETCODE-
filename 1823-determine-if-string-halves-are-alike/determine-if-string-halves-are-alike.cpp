class Solution {
private:
    bool isvowel(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' ||   x=='I' || x=='O' || x=='U')
    return true;
    return false;
    }
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        if(n%2==1) return false;
        int i=0;
        int j=n-1;
        int vow1=0;
        int vow2=0;
        int const1=0;
        int const2=0;
        while(i<j){
          if(isvowel(s[i])){
            vow1++;
          }
          else{
            const1++;
          }
          if(isvowel(s[j])){
            vow2++;
          }
          else{
            const2++;
          }
          i++;
          j--;
        }
       return const1==const2 && vow1==vow2;
    }
};