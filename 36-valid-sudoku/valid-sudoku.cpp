class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            int r=i+1,c=j+1;
            while(r<9){
                if(board[i][j]==board[r][j])
                return false;
                r++;
            }
            while(c<9){
                   if(board[i][j]==board[i][c])
                return false;
                c++;
            }
            int boxRow = (i / 3) * 3;
                int boxCol = (j / 3) * 3;

                for (int br = boxRow; br < boxRow + 3; br++) {
                    for (int bc = boxCol; bc < boxCol + 3; bc++) {
                        if ((br != i || bc != j) && board[br][bc] == board[i][j])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};