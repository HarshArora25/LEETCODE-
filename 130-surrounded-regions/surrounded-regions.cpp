class Solution {
public:
    void solve(vector<vector<char>>& board) {
      int n=board.size();
      int m=board[0].size();
      queue<pair<int,int>>qu;
      vector<vector<int>>visited(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='O' && (i==0 || j==0 || i==n-1 || j==m-1)){
            qu.push({i,j});
            visited[i][j]=1;
            }
        }
      }  
 
      vector<int>nr={-1,0,1,0};
      vector<int>nc={0,1,0,-1};
      while(!qu.empty()){
      int frst=qu.front().first;
      int scnd=qu.front().second;
      qu.pop();
      for(int i=0;i<4;i++){
        int newr=nr[i]+frst;
        int newc=nc[i]+scnd;
     if(newr>=0 && newr<n && newc>=0 && newc<m && !visited[newr][newc] && board[newr][newc]=='O'){
        visited[newr][newc]=1;
        qu.push({newr,newc});
     }
      }
      }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(visited[i][j]==0 && board[i][j]=='O')
          board[i][j]='X';
        }
    }

    }
};