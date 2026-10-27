class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        string res="";
        for(int i=0;i<n-1;i++){
            string neww="";
            res+=s[i];
            if (n % res.size() != 0) continue;
            int sz=n/res.size();
            for(int j=0;j<sz;j++)
            neww+=res;
            if(neww==s) return true;
        }
        return false;
    }
};