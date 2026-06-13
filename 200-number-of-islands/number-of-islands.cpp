class Solution {
private:
    void dfs(vector<vector<char>>&grid,vector<vector<int>>&visited,int n,int m,int i,int j){
        visited[i][j]=1;
        int nr[]={-1,0,1,0};
        int nc[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int newr=nr[k]+i;
            int newc=nc[k]+j;
        if(newr>=0 && newr<n && newc>=0 && newc<m && !visited[newr][newc] && grid[newr][newc]=='1'){
            dfs(grid,visited,n,m,newr,newc);
        }
        }

    }
public:
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>visited(n,vector<int>(m,0));
      int count=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]=='1' && !visited[i][j]){
            count=count+1;
            dfs(grid,visited,n,m,i,j);
          } 
        }
      }  
      return count;
    }
};