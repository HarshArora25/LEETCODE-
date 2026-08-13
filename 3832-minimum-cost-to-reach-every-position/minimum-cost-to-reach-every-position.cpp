class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
      int n=cost.size();
      int mini=1e9;
      for(int i=0;i<n;i++){
        mini=min(mini,cost[i]);
        cost[i]=mini;
      }  
      return cost;
    }
};