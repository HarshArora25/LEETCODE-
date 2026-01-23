class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&col,int i,int color){
        col[i]=color;
        for(auto adjnode:graph[i]){
            if(col[adjnode]==-1){
         if(!dfs(graph,col,adjnode,!color))
         return false;
            }
            else if(col[adjnode]==color)
            return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       vector<int>col(n,-1);
       for(int i=0;i<n;i++){
        if(col[i]==-1){
        if(dfs(graph,col,i,0)==false) return false;
       } 
       }
       return true;
    }
};