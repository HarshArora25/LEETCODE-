class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        
        vector<int> vec1(26, 0), vec2(26, 0);
        for(int i = 0; i < word1.size(); i++){
            vec1[word1[i] - 'a']++;
            vec2[word2[i] - 'a']++;
        }
        
        // Check if both have the exact same set of characters
        for(int i = 0; i < 26; i++){
            if((vec1[i] == 0 && vec2[i] != 0) || (vec1[i] != 0 && vec2[i] == 0)) 
                return false;
        }
        
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        
        return vec1 == vec2; // Direct vector comparison
    }
};