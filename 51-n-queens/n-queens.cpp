class Solution {
private:
    bool safe(int row, int col, const vector<string> &temp, int n) {
        int rowdup = row;
        int coldup = col;

        // ye upper-left diagonal k lye
        while (row >= 0 && col >= 0) {
            if (temp[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        row = rowdup;
        col = coldup;

        // ye left row check k liye
        while (col >= 0) {
            if (temp[row][col] == 'Q')
                return false;
            col--;
        }

        row = rowdup;
        col = coldup;

        // ye lower diag k liye
        while (row < n && col >= 0) {
            if (temp[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(int col, int n, vector<string> temp, vector<vector<string>> &ans) {
        if (col == n) {
            ans.push_back(temp);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (safe(row, col, temp, n)) {
                temp[row][col] = 'Q';
                solve(col + 1, n, temp, ans);
                temp[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n, string(n, '.'));

        solve(0, n, temp, ans);

        return ans;
    }
};
