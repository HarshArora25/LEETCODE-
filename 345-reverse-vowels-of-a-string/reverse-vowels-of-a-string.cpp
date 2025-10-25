class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (i < j) {
            bool leftVowel = vowels.find(s[i]) != string::npos;
            bool rightVowel = vowels.find(s[j]) != string::npos;

            if (leftVowel && rightVowel) {
                swap(s[i], s[j]);
                i++;
                j--;
            } 
            else if (!leftVowel) {
                i++;
            } 
            else if (!rightVowel) {
                j--;
            }
        }
        return s;
    }
};
