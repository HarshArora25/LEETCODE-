class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>vec1(26,0),vec2(26,0);
        set<char>st1,st2;
        if(word1.size() != word2.size()) return false;
        for(int i=0;i<word1.size();i++){
        st1.insert(word1[i]);
        st2.insert(word2[i]);
          vec1[word1[i]-'a']++;
          vec2[word2[i]-'a']++;
        }
        if(st1 != st2) return false;
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        for(int i=0;i<26;i++){
            if(vec1[i] !=vec2[i])
            return false;
        }
        return true;
    }
};