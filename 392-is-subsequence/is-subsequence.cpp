class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n=s.size();
       int m=t.size();
       int count=0;
       int i=0;
       int j=0;
       while(j<m && count !=n){
        if(s[i]==t[j]){
            i++;
            count++;
        }
        j++;
       } 
       return count==n;
    }
};