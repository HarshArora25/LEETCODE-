class Solution {
    private:
    bool isvowel(char f){
        if(f=='a' || f=='e' || f=='i'  || f=='o' || f=='u' || f=='A' ||f=='E' ||f=='I' ||f=='O' ||f=='U')
        return true;
        else 
        return false;
    }
public:
    bool halvesAreAlike(string s) {
       int n=s.size();
       if(n%2 !=0) return false;
       int frsthalf=0,scndhlf=0;
       int m=n/2;
       for(int i=0;i<m;i++){
        if(isvowel(s[i]))
        frsthalf++;
       } 
       for(int i=m;i<n;i++){
        if(isvowel(s[i]))
        scndhlf++;
       }
       return frsthalf==scndhlf;
    }
};