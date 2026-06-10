class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
      int n=isConnected.size(); 
      vector<int>adjlst[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(isConnected[i][j]==1 && i!=j){
           adjlst[i].push_back(j);
         }
        }
    }
    queue<int>qu;
    vector<int>visited(n,0);
    int count=0;
    for(int i=0;i<n;i++){
    if(!visited[i]){
        count++;
        qu.push(i);
        visited[i]=1;
    while(!qu.empty()){
       int fr=qu.front();
       qu.pop();
       for(auto a:adjlst[fr]){
        if(!visited[a]){
        visited[a]=1;
        qu.push(a);
       }
    }
    }
    }
    }
   return count;
    }
};