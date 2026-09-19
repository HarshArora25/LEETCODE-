class Solution {
private:
  int dfs(vector<vector<int>>& grid,int i,int j,int id){
    if(i<0 || i>=grid.size() || j<0 || j>=grid.size() || grid[i][j] !=1) return 0;
    int size=1;
    grid[i][j]=id;
    size+=dfs(grid,i+1,j,id);
    size+=dfs(grid,i-1,j,id);
    size+=dfs(grid,i,j+1,id);
    size+=dfs(grid,i,j-1,id);
    return size;
  }
public:
    int largestIsland(vector<vector<int>>& grid) {
     int n=grid.size();
     unordered_map<int,int>mpp;
     int id=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==1){
            mpp[id]=dfs(grid,i,j,id);
            id++;
           }
        }
    } 
    int max=0;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                flag++;
                unordered_set<int>neighbours;
                    if(i - 1 >= 0 && grid[i - 1][j] > 1)
                        neighbours.insert(grid[i - 1][j]);
                    if(i + 1 < n && grid[i + 1][j] > 1)
                        neighbours.insert(grid[i + 1][j]);
                    if(j - 1 >= 0 && grid[i][j - 1] > 1)
                        neighbours.insert(grid[i][j - 1]);
                    if(j + 1 < n && grid[i][j + 1] > 1)
                        neighbours.insert(grid[i][j + 1]);
                int maxsize=1;
                for(auto& it:neighbours){
                    maxsize+=mpp[it];
                }
                if(maxsize>max)
                max=maxsize;
            }
        }
    }  
         return flag==0?n*n:max;
    }
};