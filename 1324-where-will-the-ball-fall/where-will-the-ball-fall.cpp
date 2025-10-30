class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>result;
        for(int ball=0;ball<m;ball++){
            int row=0;
            int col=ball;
            bool atka=false;
            while(row<n &&col >= 0 && col<m){
                if(grid[row][col]==1){
                    if(col==m-1 || grid[row][col+1]==-1){
                    atka=true;
                    break;
                    }
                    col++;
                }
                else{
                    if(col==0 || grid[row][col-1]==1){
                    atka=true;
                    break;
                    }
                    col--;
                }
                row++;
            }
               if(atka==true)
               result.push_back(-1);
               else
               result.push_back(col);
        }
        return result;
    }
};