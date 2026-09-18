class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<int>dist(n+1,1e9);
    //    dist[0]=0;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       pq.push({0,k});
       dist[k]=0;
       vector<vector<pair<int,int>>>vec(n+1);
       for(auto& it:times){
         vec[it[0]].push_back({it[1],it[2]});
       }  
       while(!pq.empty()){
        auto it=pq.top();
        int time=it.first;
        int element=it.second;
        pq.pop();
       for(auto& it:vec[element]){
        if(dist[it.first]>dist[element]+it.second){
           dist[it.first]=dist[element]+it.second;
           pq.push({dist[it.first],it.first});
        }
       }
       }
       int maxi=-1;
       for(int i=1;i<=n;i++)
       maxi=max(maxi,dist[i]);
       return maxi==1e9?-1:maxi;
    }
};