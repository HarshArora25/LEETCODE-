class Solution {
private:
    bool isvalid(int row, int col, vector<vector<char>>& board, char c) {
        for (int i = 0; i < 9; i++) {
            // row k liye check krre h
            if (board[i][col] == c)  
                return false;
            // col k liye check krre h
            if (board[row][i] == c)  
                return false;
        }
        //grid k liye 
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        for (int i = srow; i < srow + 3; i++) {
            for (int j = scol; j < scol + 3; j++) {
                if (board[i][j] == c)
                    return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
         if (board[row][col] == '.') {
         for (char c = '1'; c <= '9'; c++) {
         if (isvalid(row, col, board, c)) {
        board[row][col] = c;
        // agr 1 bhi true hogya to return krdo
        if (solve(board))
          return true;
        else
       board[row][col] = '.';
            }
                    }
                    return false;
               }
            }
        }
        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
