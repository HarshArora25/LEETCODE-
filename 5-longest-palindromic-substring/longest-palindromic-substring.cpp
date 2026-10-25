class Solution {
public:
    string longestPalindrome(string s) {
    int n=s.size();
    int start=0;
    int maxi=-1e9;
    int lft=0,ryt=0;
    for(int i=0;i<n;i++){
     lft=i;
     ryt=i;
     while(lft>=0 && ryt<n && s[lft]==s[ryt]){
        if(ryt-lft+1>maxi){
            maxi=ryt-lft+1;
            start=lft;
        }
        lft--;
        ryt++;
     }
     lft=i;
     ryt=i+1;
     while(lft>=0 && ryt<n && s[lft]==s[ryt]){
        if(ryt-lft+1>maxi){
            maxi=ryt-lft+1;
            start=lft;
        }
        lft--;
        ryt++;
     }
    }
    return s.substr(start,maxi);
    }
};