class Solution {
    private:
    vector<int>parent,rank;
    int findp(int node){
        if(node==parent[node]) return node;
        else
        return parent[node]=findp(parent[node]);
    }

    void unnion(int u,int v){
        int pu=findp(u);
        int pv=findp(v);
        if(pu==pv) return ;
        if(rank[pu]>rank[pv])
        parent[pv]=pu;
        else if(rank[pv]>rank[pu])
        parent[pu]=pv;
        else{
            parent[pv]=pu;
            rank[pu]++;
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
         parent.resize(n);
        rank.resize(n,0);
        int count1=0;
        for(int i = 0; i < n; i++)
          parent[i] = i;
        for(auto& e:connections){
          int u=e[0];
          int v=e[1];
          if(findp(u)==findp(v))
          count1++;
          else
          unnion(u,v);
        }
        int count2=0;
    for(int i=0;i<n;i++){
        if(parent[i]==i)
        count2++;
    }
     if(count1>=count2-1) return count2-1;
     else
     return -1;
    }
};