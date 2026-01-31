class Solution {
private:
vector<int>parent,rank;
int findp(int node){
    if(node==parent[node]) return node;
    return parent[node]=findp(parent[node]);
}
void unnion(int u,int v){
 int pu=findp(u);
 int pv=findp(v);
if(pu==pv) return ;
if(rank[pu]<rank[pv]){
    parent[pu]=pv;
}
else if(rank[pv]<rank[pu])
  parent[pv]=pu;
  else{
    parent[pv]=pu;
    rank[pu]++;
  }
}
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        parent.resize(V);
        rank.resize(V,0);
        for(int i=0;i<V;i++) parent[i]=i;
        for(int i=0;i<V;i++){
            for(int j=i+1;j<V;j++){
              if(isConnected[i][j]==1)
               if (isConnected[i][j] == 1) {
                    unnion(i, j);
                }
            }
        }
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (findp(i) == i)
                count++;
        }
        return count;
    }
};