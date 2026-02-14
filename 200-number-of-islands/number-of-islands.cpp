class Solution {
private:
    void dfs(int i,int j,vector<vector<int>>&visited,vector<vector<char>>& grid){
        visited[i][j]=1;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int k=0;k<4;k++){
         int nr=delr[k]+i;
         int nc=delc[k]+j;
         if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && grid[nr][nc]=='1' && visited[nr][nc]==0){
            dfs(nr,nc,visited,grid);
         }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                     count++;
                dfs(i,j,visited,grid);
                }
            }
        }
        return count;
    }
};