class Solution {
private:
   vector<vector<int>>directions{{1,0},{0,-1},{-1,0},{0,1}};
   bool helper(int n,int m,vector<vector<char>>& board,string word,int i,int j,int idx){
         if(idx==word.size()) return true;
         if(i < 0 || j < 0 || i >= n || j >= m) return false;
         if(board[i][j] != word[idx]) return false;
         char temp=board[i][j];
         board[i][j]='$';
         for(auto&dir : directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];

            if(helper(n,m,board,word,new_i,new_j,idx+1))
            return true;
         }
            board[i][j]=temp;
            return false;
   } 
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==word[0] && helper(n,m,board,word,i,j,0)){
                return true;
            }
        }
    }
            return false;
    }
};