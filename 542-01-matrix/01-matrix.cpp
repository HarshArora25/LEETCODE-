class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>qu;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    visited[i][j]=1;
                    qu.push({{i,j},0});
                }
            }
        }
        vector<vector<int>>grids(n,vector<int>(m,0));
        vector<int>delr={-1,0,1,0};
        vector<int>delc={0,-1,0,1};
        while(!qu.empty()){
            int x=qu.front().first.first;
            int y=qu.front().first.second;
            int dist=qu.front().second;
            qu.pop();
            grids[x][y]=dist;
        for(int i=0;i<4;i++){
            int newr=delr[i]+x;
            int newc=delc[i]+y;
        if(newr>=0 && newr<n && newc>=0 && newc<m && !visited[newr][newc]){
            qu.push({{newr,newc},dist+1});
            visited[newr][newc]=1;
        }
        }
        }
        return grids;
    }
};