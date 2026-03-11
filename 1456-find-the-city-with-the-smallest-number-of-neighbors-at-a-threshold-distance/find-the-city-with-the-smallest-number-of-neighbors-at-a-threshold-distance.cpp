class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
    //    vector<int>dist(edges.size(),1e9); 
    // int n=edges.size();
    // int m=edges[0].size();
    vector<vector<int>>dist(n,vector<int>(n,1e9));
    for(int i=0;i<n;i++)
         dist[i][i]=0;
            for(auto& it:edges){
                int u=it[0];
                int v=it[1];
                int wt=it[2];
              dist[u][v]=wt;
              dist[v][u]=wt;
            }

           for(int k=0;k<n;k++){
             for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 if(dist[i][k]==1e9 || dist[k][j]==1e9)
                 continue;
                 else{
                    dist[i][j]=min(dist[i][k]+dist[k][j],dist[i][j]);
                 }
                }
            }
           }
           int mincount=INT_MAX;
           int city=-1;
           for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(dist[i][j]!=1e9 && dist[i][j]<=distanceThreshold)
                count++;
            }
            if(count<=mincount){
                mincount=count;
                city=i;
            }
           }
           return city;
    }
};