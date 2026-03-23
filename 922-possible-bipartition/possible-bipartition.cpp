class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
      vector<int>visited(n+1,-1);
      vector<vector<int>>adjl(n+1);
      for(int i=0;i<dislikes.size();i++){
       adjl[dislikes[i][0]].push_back(dislikes[i][1]);
        adjl[dislikes[i][1]].push_back(dislikes[i][0]);
      }
      for(int i=1;i<=n;i++){
        if(visited[i] != -1) continue;
      queue<int>qu;
      qu.push(i);
      visited[i]=1;
      while(!qu.empty()){
        int elem=qu.front();
        qu.pop();
        for(auto& it: adjl[elem]){
           if(visited[it]==-1){
            visited[it]=1-visited[elem];
            qu.push(it);
          }
           else if( visited[it]==visited[elem] ){
           return false;
          }
        }
      }
      }
       return true;

    }
};