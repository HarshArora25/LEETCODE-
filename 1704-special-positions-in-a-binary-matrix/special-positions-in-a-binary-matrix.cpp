class Solution {
public:
    int numSpecial(vector<vector<int>>& grid) {
       int m=grid.size();
      int n=grid[0].size(); 

      vector<int>row1(m,0),col1(n,0);
    //   vector<int>row2(m,0),col2(n,0);
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==1){
           row1[i]+=1;
           col1[j]+=1;
           }
        }
      } 
      int ct=0; 
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(row1[i]==1 && col1[j]==1 && grid[i][j]==1)
        ct++;
      }
      }
      return ct;
    }
};