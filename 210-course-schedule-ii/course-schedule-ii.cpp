class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& x) {
      int n=x.size();
      queue<int>qu;
      vector<int>indegree(numCourses,0);
      vector<vector<int>>adjl(numCourses);
      for(auto it:x){
        adjl[it[0]].push_back(it[1]);
      }
      for(auto it:x){
        indegree[it[1]]++;
      }
      for(int i=0;i<numCourses;i++){
        if(indegree[i]==0)
           qu.push(i);
      }
      vector<int>ans;
      while(!qu.empty()){
       int fr=qu.front();
       ans.push_back(fr);
       qu.pop();
       for(auto& it:adjl[fr]){
        indegree[it]--;
        if(indegree[it]==0)
        qu.push(it);
       }
      }
      reverse(ans.begin(),ans.end());
      if(ans.size()==numCourses) return ans;
         return {};
    }
};