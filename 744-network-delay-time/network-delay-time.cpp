class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0;i<times.size();i++){
    adj[times[i][0]].push_back({times[i][1], times[i][2]});
}
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       pq.push({0,k});
       vector<int>dist(n+1,1e9);
       dist[k]=0;
       while(!pq.empty()){
        int node=pq.top().second;
        // int prevtime=qu.top().second;
        pq.pop();
        for(auto& it:adj[node]){
         if(dist[it.first]>dist[node]+it.second){
            dist[it.first]=dist[node]+it.second;
            pq.push({dist[it.first],it.first});
         }
        }
       } 
       int maxi=-1;
        for(int i=1;i<=n;i++){
          maxi=max(dist[i],maxi);
        }
       if(maxi==1e9) return -1;
       return maxi;
    }
};