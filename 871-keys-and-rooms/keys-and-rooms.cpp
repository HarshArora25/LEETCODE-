class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,0);
        // vector<vector<int>>adjl(n);
        queue<int>qu;
        qu.push(0);
        // for(int i=0;i<n;i++){
        //     adjl[i].push_back(rooms[i].begin(),rooms[i].end());
        // }
        visited[0]=1;
        while(!qu.empty()){
         int elem=qu.front();
         qu.pop();
         for(auto& it: rooms[elem]){
            if(!visited[it]){
                visited[it]=1;
                qu.push(it);
            }
         }
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0) return false;
        }
        return true;
    }
};