class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>map1(256,0);
        vector<int>map2(256,0);
        if(s.size() !=t.size()) return false;
        int i=0;
        while(i<s.size()){
          if(map1[s[i]]==0 && map2[t[i]]==0){
            map1[s[i]]=t[i];
            map2[t[i]]=s[i];
          }
            else if(map1[s[i]] != t[i] || map2[t[i]] != s[i])
          return false;
          i++;
        }
        return true;
    }
};