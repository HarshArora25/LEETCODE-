class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int z=edges.size();
        vector<vector<int>>adjl(n);
        for(int i=0;i<edges.size();i++){
            adjl[edges[i][0]].push_back(edges[i][1]);
            adjl[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(n,0);
        visited[source]=1;
        queue<int>qu;
        qu.push(source);
        while(!qu.empty()){
            int elem=qu.front();
            qu.pop();
             if(elem==destination) return true;
            for(auto& it: adjl[elem]){
                 if(visited[it]==0){
                    visited[it]=1;
                     qu.push(it);
                 }
                }
            }
        return false;
    }
};