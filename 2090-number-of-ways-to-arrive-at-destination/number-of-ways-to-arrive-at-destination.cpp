// class Solution {
// public:
//     int countPaths(int n, vector<vector<int>>& roads) {
//          vector<vector<pair<int,int>>> adjlst(n);
//         for(auto& it:roads){
//             adjlst[it[0]].push_back({it[1], it[2]});
// adjlst[it[1]].push_back({it[0], it[2]});
//         }
//         vector<int>distance(n,1e9),ways(n,0);
//         distance[0]=0;
//         ways[0]=1;
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         pq.push({0,0}); // first->dist second->node
//         while(!pq.empty()){
//          int dist=pq.top().first;
//          int node=pq.top().second;
//          pq.pop();
//          if(dist > distance[node]) continue;
//          for(auto& it:adjlst[node]){
//             int adjnode=it.first;
//             int adjdist=it.second;
//           if(distance[adjnode]>distance[node]+adjdist){
//             distance[adjnode]=distance[node]+adjdist;
//             pq.push({distance[adjnode],adjnode});
//             ways[adjnode]=ways[node];
//           }
//           else if(distance[adjnode]==distance[node]+adjdist){
//             ways[adjnode]+=ways[node];
//           }
//          }
//         }
//        return ways[n-1];
//     }
// };
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        vector<vector<pair<int,int>>> adjlst(n);

        for(auto &it : roads){
            adjlst[it[0]].push_back({it[1], it[2]});
            adjlst[it[1]].push_back({it[0], it[2]});
        }

        vector<long long> distance(n, 1e18);
        vector<long long> ways(n, 0);

        int mod = 1e9 + 7;

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > pq;

        distance[0] = 0;
        ways[0] = 1;

        pq.push({0,0});

        while(!pq.empty()){

            long long dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // if(dist > distance[node]) continue;

            for(auto &it : adjlst[node]){

                int adjnode = it.first;
                int wt = it.second;

                if(distance[adjnode] > dist + wt){
                    distance[adjnode] = dist + wt;
                    pq.push({distance[adjnode], adjnode});
                    ways[adjnode] = ways[node];
                }
                else if(distance[adjnode] == dist + wt){
                    ways[adjnode] = (ways[adjnode] + ways[node]) % mod;
                }
            }
        }

        return ways[n-1] % mod;
    }
};