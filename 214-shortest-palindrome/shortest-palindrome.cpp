class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();

        string rev = s;
        reverse(rev.begin(), rev.end());

        for(int i = 0; i < n; i++) {

            if(memcmp(s.data(), rev.data() + i, n - i) == 0) {
                return rev.substr(0, i) + s;
            }
        }

        return rev + s;
    }
};