class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>qu;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && (i==0 || i==n-1 || j==0 || j==m-1)){
                qu.push({i,j});
                visited[i][j]=1;
                }
            }
        }
        int delr[]={-1,0,1,0};
        int delc[]={0,-1,0,1};
        while(!qu.empty()){
          int x=qu.front().first;
          int y=qu.front().second;
          qu.pop();
          for(int i=0;i<4;i++){
           int nr=delr[i]+x;
           int nc=delc[i]+y;
           if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && visited[nr][nc]==0){
            visited[nr][nc]=1;
            qu.push({nr,nc});
           }
          }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && visited[i][j]==0)
                count++;
            }
        }
        return count;
    }
};