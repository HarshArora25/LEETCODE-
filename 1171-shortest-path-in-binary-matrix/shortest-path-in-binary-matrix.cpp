class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1;
        queue<pair<pair<int,int>,int>>qu;
        qu.push({{0,0,},0}) ;  // 1st pos=x 2nd ->y 3rd dist;
         vector<vector<int>>distance(grid.size(),vector<int>(grid[0].size(),1e9));
         distance[0][0]=0;
        while(!qu.empty()){
        auto& it=qu.front();
      int x = it.first.first;
     int y = it.first.second;
       int dist = it.second;
        qu.pop();
        int delr[]={-1,-1,1,1,0,-1,0,1};
        int delc[]={-1,1,-1,1,1,0,-1,0};
        for(int i=0;i<8;i++){
            int nr=delr[i]+x;
            int nc=delc[i]+y;
            if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && grid[nr][nc]==0 && distance[nr][nc]>1+dist){
                distance[nr][nc]=1+dist;
                qu.push({{nr,nc,},dist+1});
            }
        }
        }
        if(distance[grid.size()-1][grid[0].size()-1]==1e9) return -1;
        else
        return distance[grid.size()-1][grid[0].size()-1]+1;
    }
};