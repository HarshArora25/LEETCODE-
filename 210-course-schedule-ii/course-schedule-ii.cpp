class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>>adj(n);
         vector<int> indegree(n, 0);
        for(auto& it:prerequisites){
            adj[it[1]].push_back(it[0]);
             indegree[it[0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
            q.push(i);
        }
        // if(qu.empty()) return false;
        vector<int>res;
        while(!q.empty()){
         int x=q.front();
         q.pop();
         res.push_back(x);
         for(auto it:adj[x]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
         }
        }
        if(res.size()<n) return{};
       return res;
    }
};  
    