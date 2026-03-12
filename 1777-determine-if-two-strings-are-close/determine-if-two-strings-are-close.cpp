class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set<char>st1,st2;
        vector<int>x(26,0),y(26,0);
        if(word1.size() != word2.size())
       return false;
        for(int i=0;i<word1.size();i++){
          st1.insert(word1[i]);
          st2.insert(word2[i]);
           x[word1[i]-'a']++;
           y[word2[i]-'a']++;
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(st1 != st2 || x !=y) return false;
        return true;
    }
};