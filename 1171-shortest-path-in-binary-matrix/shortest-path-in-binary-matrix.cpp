class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
      
      vector<vector<int>>dist(n,vector<int>(n,-1));  priority_queue<
    pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>>
> pq;
      
      pq.push({1,{0,0}});
      dist[0][0]=1;
      while(!pq.empty()){
        auto it=pq.top();
        int l=it.first;
        int x=it.second.first;
        int y=it.second.second;
        pq.pop();
     vector<int>nr={-1,-1,-1,0,0,1,1,1};
     vector<int>nc={-1,0,1,-1,1,-1,0,1};
     for(int i=0;i<8;i++){
        int newr=nr[i]+x;
        int newc=nc[i]+y;
        // if(newr==n-1 && newc==n-1) return l+1;
     if(newr>=0 && newr<n && newc>=0 && newc<n && grid[newr][newc]==0 && dist[newr][newc]==-1){
        dist[newr][newc]=l+1;
        pq.push({dist[newr][newc],{newr,newc}});
     }
     }
      }
      return dist[n-1][n-1]==-1?-1:dist[n-1][n-1];
    }
};