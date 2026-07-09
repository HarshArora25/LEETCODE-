class Solution {
public:
    int strStr(string haystack, string needle) {
       int m=needle.size();
       if(needle.size()>haystack.size()) return -1;
    //    if(haystack==needle) return 0;
       for(int i=0;i<=haystack.size()-m;i++){
        string s=haystack.substr(i,m);
        if(s==needle) return i;
       } 
        return -1;
    }
};