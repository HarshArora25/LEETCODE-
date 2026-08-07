class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<int,int>>qu;
    int count=0;
    int fresh=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(grid[i][j]==2)
           qu.push({i,j});
           if(grid[i][j]==1)
           fresh++;
        }
    }  
    if(fresh==0) return 0;
    int nr[]={-1,0,1,0};
    int nc[]={0,1,0,-1};
    while(!qu.empty()){
        count++;
    int size=qu.size();
    while(size--){
        int fr=qu.front().first;
      int fr2=qu.front().second;
      qu.pop();
      for(int i=0;i<4;i++){
        int newr=nr[i]+fr;
        int newc=nc[i]+fr2;
      if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 ){
      qu.push({newr,newc});
      grid[newr][newc]=2;
      fresh--;
      }
    }
    }
    }
   if(fresh>0) return -1;
   return count-1;
    }
};