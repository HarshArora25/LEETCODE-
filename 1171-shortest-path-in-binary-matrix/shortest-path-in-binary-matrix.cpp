class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
      if(grid[0][0] == 1 || grid[grid.size()-1][grid.size()-1] == 1)
             return -1;       
     queue<pair<int,pair<int,int>>>qu;
     vector<int>nr={-1,-1,-1,0,0,1,1,1};
     vector<int>nc={-1,0,1,-1,1,-1,0,1};
     qu.push({0,{0,0}}) ;
     vector<vector<int>>dist(n,vector<int>(m,1e9));
     dist[0][0]=0;
     while(!qu.empty()){
        int dis=qu.front().first;
        int x=qu.front().second.first;
        int y=qu.front().second.second;
        qu.pop();
    for(int i=0;i<8;i++){
        int newr=x+nr[i];
        int newc=y+nc[i];
        if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==0){
           if(dist[newr][newc]>dis+1){
           dist[newr][newc]=dis+1;  
           qu.push({dist[newr][newc],{newr,newc}});
           }
        }
    }
     }
        if(dist[n-1][m-1]==1e9) return -1; 
        return dist[n-1][m-1]+1;
    }
};