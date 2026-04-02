class Solution {
public:
    long long mod = 1e9 + 7;

    int countHomogenous(string s) {
        vector<string> x;

        for (int i = 0; i < s.size(); i++) {
            string res = "";
            res += s[i];

            while (i + 1 < s.size() && s[i] == s[i + 1]) {
                res += s[i + 1];
                i++;
            }

            x.push_back(res);
        }

        long long len = 0;

        for (int i = 0; i < x.size(); i++) {
            long long n = x[i].size();
            len = (len + (n * (n + 1)) / 2) % mod;
        }

        return len;
    }
};