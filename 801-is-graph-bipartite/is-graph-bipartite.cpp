class Solution {
private:
    bool dfs(vector<int>&visited,vector<vector<int>>& graph,int n,int i,int par){
      visited[i]=par;
        for(auto it:graph[i]){
             if(visited[it]==-1){
          if(!dfs(visited,graph,n,it,!par))
          return false;
        }
      else if(visited[i]==visited[it]) return false;
        }
       return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int>visited(n,-1);
       for(int i=0;i<n;i++){
        if(visited[i] ==-1)
       if( !dfs(visited,graph,n,i,0))
       return false;
       } 
       return true;
    }
};