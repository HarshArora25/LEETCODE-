class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      queue<pair<int,int>>qu;
      vector<pair<int,int>>adjl[n+1];
      for(auto& it: times){
        adjl[it[0]].push_back({it[1],it[2]});
      }  
      qu.push({k,0});
      vector<int>dist(n+1,1e9);
      dist[k]=0;
      while(!qu.empty()){
        int nbr=qu.front().first;
        int dis=qu.front().second;
        qu.pop();
        for(auto& it:adjl[nbr]){
           if(dist[it.first]>it.second+dis){
            dist[it.first]=it.second+dis;
            qu.push({it.first,dist[it.first]});
           }
        }
      }
        int maxi = 0;

        for(int i = 1; i <= n; i++){

            if(dist[i] == 1e9)
                return -1;

            maxi = max(maxi, dist[i]);
        }

        return maxi;
    }
};