class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int a=s.size();
       int b=t.size();
       if(a!=b) return false;
       vector<int>ans1(256,0);
       vector<int>ans2(256,0);
       for(int i=0;i<s.size();i++){
        if(ans1[s[i]]==0 && ans2[t[i]]==0){
            ans1[s[i]]=t[i];
            ans2[t[i]]=s[i];
        }
        else if(ans1[s[i]] !=t[i] || ans2[t[i]] !=s[i])
        return false;
       }
       return true;
    }
};