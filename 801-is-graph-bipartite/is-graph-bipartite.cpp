class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
         int n = graph.size();
        vector<int> color(n, -1);
      for(int i = 0; i < n; i++) {
            if(color[i] != -1)
                continue;
        queue<int>qu;
        // vector<int>color(n,-1);
        qu.push(i);
        color[i]=0;
        while(!qu.empty()){
        int node=qu.front();
        qu.pop();
        for(auto adj:graph[node]){
            if(color[adj]==-1){
                qu.push(adj);
                color[adj]= !color[node];
            }
            else if(color[adj]==color[node])
             return false;
        }
        }
      }
        return true;
    }
};