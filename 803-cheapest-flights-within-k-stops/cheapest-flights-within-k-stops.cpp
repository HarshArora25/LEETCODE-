class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adjl[n];
        for(auto& it:flights){
            adjl[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<pair<int,int>,int>>qu;
        qu.push({{0,0},src});
        vector<int>dist(n,1e9);
        dist[src]=0;
        while(!qu.empty()){
            int stop=qu.front().first.first;
            int dis=qu.front().first.second;
            int src=qu.front().second;
            qu.pop();
            if(stop>k) continue;
            for(auto& it: adjl[src]){
                if(dist[it.first]>dis+it.second){
                    dist[it.first]=dis+it.second;
                    qu.push({{stop+1,dist[it.first]},it.first});
                }
            }
                    }
                    if(dist[dst]==1e9) return -1;
                    return dist[dst];
    }
};