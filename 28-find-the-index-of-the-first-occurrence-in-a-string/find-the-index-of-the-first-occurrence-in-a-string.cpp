class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=needle.size();
       int m=haystack.size();
        for(int i=0;i<=m-n;i++){
             string x=haystack.substr(i,n);
             if(x==needle) return i;
            }
     return -1;
    }
};