class Solution {
public:
    void solve(vector<vector<char>>& board) {
       int n=board.size();
       int m=board[0].size();
       vector<vector<int>>visited(n,vector<int>(m,0)); 
       queue<pair<int,int>>qu;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if((i==0 || j==0 || i==n-1 || j==m-1) && board[i][j]=='O' ){
            visited[i][j]=1;
            qu.push({i,j});
        }
        }
       }
       int nr[]={-1,0,1,0};
       int nc[]={0,1,0,-1};
    while(!qu.empty()){
        int x=qu.front().first;
        int y=qu.front().second;
        qu.pop();
        for(int i=0;i<4;i++){
            int newr=nr[i]+x;
            int newc=nc[i]+y;
        if(newr>=0 && newr<n && newc>=0 && newc<m && visited[newr][newc]==0 && board[newr][newc]=='O' ){
            board[newr][newc]='O';
            visited[newr][newc]=1;
            qu.push({newr,newc});
        }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
     if(i==0 || i==n-1 || j==0 || j==m-1)
     continue;
    else if(visited[i][j]==0 && board[i][j]=='O' )
    board[i][j]='X';
        }
    }

    }
};