class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        //  vector<pair<int,int>> adjlist[n];
       vector<vector<pair<int,int>>> adjlist(n);

for(auto &it : flights){
    adjlist[it[0]].push_back({it[1], it[2]});
}
        queue<pair<int, pair<int,int>>> q;
        vector<int>dist(n,1e9);
        q.push({src,{0,0}});
        dist[src]=0;
        while(!q.empty()){
            auto it=q.front();
            int node=it.first;
            int stop=it.second.first;
            int price=it.second.second;
            q.pop();
            if(stop>k) continue;
        for(auto& it:adjlist[node]){
            int adjnode=it.first;
            int adjprice=it.second;
            if(price+adjprice<dist[adjnode] ){
                dist[adjnode]=price+adjprice;
                q.push({adjnode,{stop+1,dist[adjnode]}});
            }
        }
        }
          if(dist[dst] == 1e9) return -1;
        return dist[dst];
    }
};