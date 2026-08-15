class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int src, int destination) {
        // int n=edges.size();
        vector<int>visited(n,0);
        vector<int>adjl[n];
        for(auto& it:edges){
         adjl[it[0]].push_back(it[1]);
         adjl[it[1]].push_back(it[0]);
        }
        queue<int>qu;
        qu.push(src);
        // visited[src]=1;
        while(!qu.empty()){
            int elem=qu.front();
            qu.pop();
            visited[elem]=1;
            for(auto& it:adjl[elem]){
                if(!visited[it])
                qu.push(it);
            }
        }
        if(visited[destination] ==0) return false;
        return true;
    }
};