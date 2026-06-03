class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int x=strs.size();
    sort(strs.begin(),strs.end());
     string first=strs[0];
     string last=strs[x-1];
     int n=first.size();
     int m=last.size();
     int i=0;
     while(i<n && i<m  && first[i]==last[i] ){
        i++;
     }
     return first.substr(0,i);
    }
};