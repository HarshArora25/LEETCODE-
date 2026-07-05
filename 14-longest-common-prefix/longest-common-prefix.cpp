class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
       sort(strs.begin(),strs.end());
       string frst=strs[0];
       string lst=strs[n-1];
       int i=0;
       int x=min(frst.size(),lst.size());
       while(i<x){
        if(frst[i]==lst[i])
        i++;
        else
        break;
       } 
       return frst.substr(0,i);
    }
};