class Solution {
public:
    bool repeatedSubstringPattern(string s) {
     int n=s.size();
     for(int i=1;i<n;i++){
        string x=s.substr(0,i);
        int times=n/x.size();
        string neew="";
        while(times--){
            neew+=x;
        }
       if(neew==s) return true;
     }
     return false;
    }
};