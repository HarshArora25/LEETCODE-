class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(), n = maze[0].size();
        queue<pair<int,int>>qu;
        qu.push({entrance[0],entrance[1]});
        int nr[]={-1,0,1,0};
        int nc[]={0,1,0,-1};
       vector<vector<bool>>visited(m,vector<bool>(n,false));
       visited[entrance[0]][entrance[1]] = true;    
       int steps=0;
       while(!qu.empty()){
        int size=qu.size();
        while(size--){
            auto[r,c]=qu.front();
            qu.pop();
          if ((r == 0 || c == 0 || r == m-1 || c == n-1) &&
                    !(r == entrance[0] && c == entrance[1])) {
                    return steps;
                }
         for(int i=0;i<4;i++){
            int newr=nr[i]+r;
            int newc=nc[i]+c;
              if (newr >= 0 && newc >= 0 && newr < m && newc < n &&
                        maze[newr][newc] == '.' && !visited[newr][newc]) {
                        visited[newr][newc] = true;
                        qu.push({newr, newc});
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};