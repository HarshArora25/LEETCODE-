class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string>vec;
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(!word.empty())
        vec.push_back(word);
    }
     if (pattern.size() != vec.size()) return false;
    int sz=pattern.size();
      unordered_map<char, string> mpp;
        unordered_map<string, char> rev;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string w = vec[i];

            if (mpp.find(ch) != mpp.end() && mpp[ch] != w)
                return false;

            if (rev.find(w) != rev.end() && rev[w] != ch)
                return false;

            mpp[ch] = w;
            rev[w] = ch;
        }

        return true;
    }
};