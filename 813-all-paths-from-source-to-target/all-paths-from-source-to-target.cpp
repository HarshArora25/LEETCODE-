class Solution {
private:
 void dfs(vector<vector<int>>& graph,vector<int>visited,int n, vector<vector<int>>&finres,vector<int>res,int i){
    visited[i]=1;
    res.push_back(i);
    if(i==n-1){
         finres.push_back(res);
         return ;
    }
    for(auto& it:graph[i]){
     dfs(graph,visited,n,finres,res,it);
    }
     visited[i]=0;
     res.pop_back();
 }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
     int n=graph.size();
     vector<int>visited(n,0);
     vector<vector<int>>finres;
     vector<int>res;
        dfs(graph,visited,n,finres,res,0);
     return finres; 
    }
};