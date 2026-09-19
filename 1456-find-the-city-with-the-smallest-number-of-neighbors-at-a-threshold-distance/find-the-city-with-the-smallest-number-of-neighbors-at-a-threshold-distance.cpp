class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
       vector<vector<int>>mat(n,vector<int>(n,1e9));
       for(auto& it:edges){
        int x=it[0];
        int y=it[1];
        int wt=it[2];
        mat[x][y]=wt;
        mat[y][x]=wt;
       }
       for(int i=0;i<n;i++) mat[i][i]=0;

       for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
          if(mat[i][k] !=1e9 && mat[k][j] !=1e9){
            mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
          }
        }
        }
       } 
       int state=-1;
       int mini=1e9;
       for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(mat[i][j]<=distanceThreshold)
            count++;
        }
        if(count<=mini){
            mini=count;
            state=i;
        }
       }
         return state;
    }
};