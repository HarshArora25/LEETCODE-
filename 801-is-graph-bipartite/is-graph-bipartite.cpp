class Solution {
// private:
//    bool dfs(vector<vector<int>>&graph,int n,vector<int>color,int parent,int child){
    
//    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        // dfs(graph,n,color,-1,0);
        color[0]=0;
        for(int i=0;i<n;i++){
        queue<int>qu;
        qu.push(i);
        while(!qu.empty()){
            int parent=qu.front();
            qu.pop();
        for(auto it:graph[parent]){
            if(color[it] ==-1){
                color[it]=!color[parent];
                qu.push(it);
            }
            else if(color[parent]==color[it])
            return false;
        }
        }
        }
        return true;
    }
};