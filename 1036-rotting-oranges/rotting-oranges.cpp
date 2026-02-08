class Solution {
    int step;
public:
    int orangesRotting(vector<vector<int>>& grid) {
      queue<pair<pair<int,int>,int>>qu;
      vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
      int nr[]={-1,0,1,0};
      int nc[]={0,1,0,-1};
      int fresh=0;
      for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
           if(grid[i][j]==2){
            qu.push({{i,j},0});
            vis[i][j]=1;
           }
           if(grid[i][j]==1)
           fresh++;
        }
      }  
      while(!qu.empty()){
       int x=qu.front().first.first;
       int y=qu.front().first.second;
      step=qu.front().second;
       qu.pop();
       for(int i=0;i<4;i++){
        int newr=nr[i]+x;
        int newc=nc[i]+y;
        if(newr>=0 && newr<grid.size() && newc>=0 && newc<grid[0].size() && !vis[newr][newc] && grid[newr][newc]==1){
            qu.push({{newr,newc},step+1});
            vis[newr][newc]=1;
            fresh--;
        }
       }
      }
      return (fresh>0)?-1:step;
    }
};