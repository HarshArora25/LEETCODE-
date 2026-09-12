class Solution {
private:
 bool solve(vector<vector<char>>& board, string word,int n,int m,int i,int j,int index){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    if(board[i][j] != word[index]) return false;
    if(word.size()-1==index) return true;
    char ch=board[i][j];
    board[i][j]='#';
     bool found =
            solve(board, word, n, m, i + 1, j, index + 1) ||
            solve(board, word, n, m, i - 1, j, index + 1) ||
            solve(board, word, n, m, i, j + 1, index + 1) ||
            solve(board, word, n, m, i, j - 1, index + 1);
    board[i][j]=ch;
    return found;
 }
public:
    bool exist(vector<vector<char>>& board, string word) {
      int n=board.size();
      int m=board[0].size();
      int index=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==word[0]){
          if(solve(board,word,n,m,i,j,index))
          return true;
            }
        }
      } 
          return false;
    }
};