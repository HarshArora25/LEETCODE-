class Solution {
private:
      void dfs(vector<vector<int>>& stones,vector<int>&visited,int n,int index){
        visited[index]=1;
        for(int i=0;i<n;i++){
            int r=stones[index][0];
            int c=stones[index][1];
        if(visited[i]==0 && (r==stones[i][0] || c==stones[i][1]))
        dfs(stones,visited,n,i);
        }
        return ;
      }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int count=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
              dfs(stones,visited,n,i);
               count++;
            }
        }
      return n-count;
    }
};