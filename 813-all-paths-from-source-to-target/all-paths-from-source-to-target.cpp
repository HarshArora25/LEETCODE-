class Solution {
private:
    void dfs(int i,vector<vector<int>>&graph,vector<vector<int>>&x,vector<int>y){
         y.push_back(i);
        if(i==graph.size()-1){
            x.push_back(y);
         return ;
        } 
        for(auto&it:graph[i]){
         dfs(it,graph,x,y);
        }
        y.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>x;
       vector<int>y;
        dfs(0,graph,x,y); 
      return x;
    }
};