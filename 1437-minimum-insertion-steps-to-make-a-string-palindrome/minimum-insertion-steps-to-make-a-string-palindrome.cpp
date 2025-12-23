class Solution {
    int helper(string &s, string &a, int i, int j,
               vector<vector<int>> &dp) {

        if (i < 0 || j < 0)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i] == a[j]) {
            return dp[i][j] = 1 + helper(s, a, i - 1, j - 1, dp);
        } else {
            return dp[i][j] = max(
                helper(s, a, i - 1, j, dp),
                helper(s, a, i, j - 1, dp)
            );
        }
    }

public:
    int minInsertions(string s) {
        string a = s;
        reverse(a.begin(), a.end());

        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        int lps = helper(s, a, n - 1, n - 1, dp);
        return n - lps;
    }
};
