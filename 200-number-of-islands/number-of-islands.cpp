class Solution {
private:
void dfs(int n,int m,int i,int j,vector<vector<char>>&grid,vector<vector<int>>&visited){
    visited[i][j]=1;
    vector<int>nr={-1,0,1,0};
    vector<int>nc={0,1,0,-1};
    for(int k=0;k<4;k++){
        int newrr=nr[k]+i;
        int newcc=nc[k]+j;
    if(newrr>=0 && newrr<n && newcc>=0 && newcc<m && !visited[newrr][newcc] && grid[newrr][newcc]=='1'){
        dfs(n,m,newrr,newcc,grid,visited);
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
           if(!visited[i][j] && grid[i][j]=='1'){
            count++;
             dfs(n,m,i,j,grid,visited);
           }
        }
      } 
      return count;
    }
};