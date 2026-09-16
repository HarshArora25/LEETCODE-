class Solution {
private:
     bool dfs(int numCourses,vector<int>&visited,vector<int>&path,int i,vector<vector<int>>&adjl){
        visited[i]=1;
        path[i]=1;
        for(auto it:adjl[i]){
            if(!visited[it]){
                if(dfs(numCourses,visited,path,it,adjl))
                return true;
            }
            else if(path[it])
            return true;
        }
        path[i]=0;
        return false;
     }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjl(numCourses);
        for(auto it:prerequisites){
            adjl[it[0]].push_back(it[1]);
        }
    vector<int>visited(numCourses,0);
    vector<int>path(numCourses,0);
    for(int i=0;i<numCourses;i++){
        if(!visited[i]){
        if(dfs(numCourses,visited,path,i,adjl))
        return false;
        }
    } 
    return true;
    }
};