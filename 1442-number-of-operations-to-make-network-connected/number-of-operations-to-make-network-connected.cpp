class Solution {
private:
   void dfs( vector<vector<int>>&adjl,int i,vector<int>&visited){
    visited[i]=1;
    for(auto& it:adjl[i]){
      if(!visited[it])
      dfs(adjl,it,visited);
    }
    return ;
   }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int count1=0;
        int count2=0;
        vector<int>visited(n,0);
        vector<vector<int>>adjl(n);
        for(auto& it:connections){
          adjl[it[0]].push_back(it[1]);
          adjl[it[1]].push_back(it[0]);  
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adjl,i,visited);
                count1++;
            }
        }
        int req=count1-1;
        int extra = connections.size() - (n - count1);
         if(extra >= req)
            return req;

        return -1;
    }
};