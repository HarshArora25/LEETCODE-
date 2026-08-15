class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     int n=rooms.size();
    //  vector<int>adjl[n];

    //  for(int i=0;i<n;i++){
    //  for(int j=0;j<rooms[i].size();j++){
    //    adjl[i].push(rooms[j]);
    //  }   
    //  }
    queue<int>qu;
     vector<int>visited(n,0);
     qu.push(0);
     visited[0]=1;
     while(!qu.empty()){
        int fr=qu.front();
        qu.pop();
       for(auto& it: rooms[fr]){
        if(!visited[it]){
            visited[it]=1;
            qu.push(it);
        }
       }
     }
     for(int i=0;i<n;i++){
        if(visited[i]==false)
        return false;
     }
     return true;
    }
};