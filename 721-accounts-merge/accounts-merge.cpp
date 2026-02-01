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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
         parent.resize(n);
        rank.resize(n,0);
        for(int i = 0; i < n; i++)
         parent[i] = i;

        unordered_map<string,int>mpp;

        for(int i=0;i<n;i++){
          for(int j=1;j<accounts[i].size();j++){
            string mail=accounts[i][j];
            if(mpp.find(mail)==mpp.end())     // indexing to hogyi or parents bhi assign hogye repeated mail ko
                mpp[mail]=i;
            else
                unnion(i,mpp[mail]);
          }
        }

      vector<string>merged[n];
        for(auto& it:mpp){
            string mail=it.first;
            int p=findp(it.second);
            merged[p].push_back(mail);
        }
        
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            if(merged[i].size()==0) continue;
            sort(merged[i].begin(),merged[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:merged[i])
            temp.push_back(it);
            ans.push_back(temp);
        }
        return ans;
    }
};