class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
     queue<pair<int,pair<int,int>>>qu;
     
     vector<vector<int>>visited(n,vector<int>(m,0));
     int fresh=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]==2){
            qu.push({0,{i,j}});
            visited[i][j]=1;
          }
          else if(grid[i][j]==1)
          fresh++;
        }
     } 
     int nr[]={-1,0,1,0};
     int nc[]={0,1,0,-1};  
     int maxi=0;
     while(!qu.empty()){
        int step=qu.front().first;
        int x=qu.front().second.first;
        int y=qu.front().second.second;
        maxi=max(maxi,step);
        qu.pop();
        for(int i=0;i<4;i++){
            int newr=nr[i]+x;
            int newc=nc[i]+y;
            if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && visited[newr][newc]==0){
               qu.push({step+1,{newr,newc}});
               visited[newr][newc]=1;
               fresh--;
            }
        }
     }
     if(fresh>0) return -1;
     return maxi;
    }
};