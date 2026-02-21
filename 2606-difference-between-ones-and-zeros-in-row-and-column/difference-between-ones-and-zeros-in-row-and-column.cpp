class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

      int m=grid.size();
      int n=grid[0].size(); 

      vector<int>row1(m,0),col1(n,0);
      vector<int>row2(m,0),col2(n,0);
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==0){
           row1[i]+=1;
           col1[j]+=1;
           }
           else{
            row2[i]+=1;
            col2[j]+=1;
           }
        }
      }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          grid[i][j]=(row2[i]+col2[j] - row1[i]-col1[j]);
        }
      }
       return grid;
    }
};