class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int V=graph.size();
      vector<int>revadjlst[V];
      vector<int>indegree(V);
      for(int i=0;i<V;i++){
        for(auto  adjnode:graph[i]){
           revadjlst[adjnode].push_back(i);
           indegree[i]++;
        }
      }
     queue<int>q;
     for(int i=0;i<V;i++){
        if(indegree[i]==0) q.push(i);
     }
     vector<int>ans;
     while(!q.empty()){
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto adj:revadjlst[x]){
            indegree[adj]--;
            if(indegree[adj]==0) q.push(adj);
        }
     }
     sort(ans.begin(),ans.end());
     return ans;
    }
};