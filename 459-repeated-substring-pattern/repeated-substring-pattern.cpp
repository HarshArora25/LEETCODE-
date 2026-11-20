class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       int n=s.size();
       for(int i=0;i<n/2;i++){
        string neww=s.substr(0,i+1);
        if(n % neww.size() != 0)
                continue;
        int times=s.size()/neww.size();
        string res="";
       while(times--){
        res=res+neww;
       }
       if(res==s) return true;
       }
       return false;
    }
};