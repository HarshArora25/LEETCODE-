class Solution {
public:
    bool isSubsequence(string s, string t) {
     int a=0;
     int b=0;
     int count=0;
     while(b<t.size() && a<s.size()){
        if(t[b]==s[a] &&b<t.size() && a<s.size() ){
        count++;
        a++;
        b++;
        }
        else
        b++;
     }   
     return count==s.size();
    }
};