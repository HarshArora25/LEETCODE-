class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
         int n=graph.size();
      vector<int> col(n, -1);
        queue<int>q;
      for(int i=0;i<n;i++){
         if(col[i]==-1){
            q.push(i);
            col[i]=0;
         }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto adjnode:graph[node]){
                if(col[adjnode]==-1){
                    col[adjnode]= !col[node];
                    q.push(adjnode);
                }
                else if(col[adjnode]==col[node]){
                    return false;
                }
            }
        }
      }
    
        return true;
    }
};