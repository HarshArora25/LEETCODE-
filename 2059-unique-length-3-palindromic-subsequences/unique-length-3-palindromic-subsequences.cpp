class Solution {
public:
    int countPalindromicSubsequence(string s) {
    int n=s.size();
    vector<int>left(26,-1);
    vector<int>ryt(26,-1);
    for(int i=0;i<n;i++){
        if(left[s[i]-'a']==-1)
        left[s[i]-'a']=i;
        ryt[s[i]-'a']=i;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(ryt[i]-left[i]<2) continue;
        vector<int>vis(26,0);
        for(int j=left[i]+1;j<ryt[i];j++){
            vis[s[j]-'a']=1;
        }
        for(int j=0;j<26;j++){
            if(vis[j]>0)
            count++;
        }
    }
    return count;
    }
};