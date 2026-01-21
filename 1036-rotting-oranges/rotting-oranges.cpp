// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int vis[n][m];
//       queue<pair<pair<int,int>,int>>qu;
//       for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(grid[i][j]==2){
//             qu.push({{i,j},0});
//             vis[i][j]=2;
//             }
//             else
//             vis[i][j]=0;
//         }
//       }
//       vector<int>delrow={-1,0,1,0};
//         vector<int>delcol={0,1,0,-1};
//       while(!qu.empty()){
//         int nrow=qu.front().first.first;
//         int ncol=qu.front().first.second;
//         int t=q.front().second;
//         qu.pop();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//               int nw=nrow + delrow[i];
//               int nc=ncol + delcol[j];
//               if(nw>=0 && nw<n-1 && nc>=0 && nc<m && grid[i][j]=1 && vis[nw][nr] !=2){
//                qu.push({{nw,nc},t+1});
//                vis [n][m]=2;
//               }
//             }
//         }
//     //   }
//          for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(vis[i][j]!=2 || grid[i][j]==1 ) return -1;
//             }
//          }

//       return t;
//     }
// };
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int,int>, int>> qu;

        int fresh = 0;
        int time = 0;

        // initial setup
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    qu.push({{i, j}, 0});
                    vis[i][j] = 2;
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, 1, 0, -1};

        // BFS
        while (!qu.empty()) {
            int row = qu.front().first.first;
            int col = qu.front().first.second;
            int t   = qu.front().second;
            qu.pop();

            time = max(time, t);

            for (int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == 1 &&
                    vis[nrow][ncol] != 2) {

                    qu.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 2;
                    grid[nrow][ncol] = 2;
                    fresh--;
                }
            }
        }

        if (fresh > 0) return -1;
        return time;
    }
};
