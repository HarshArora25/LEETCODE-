class Solution {
private:
    void helper(vector<vector<int>>&result,vector<int>&res,vector<int>& candidates, int target,int idx,int n){
        if(target==0){
            result.push_back(res);
            return ;
        }
        if(idx>=n ) return ;
        if (candidates[idx] <= target) {
        res.push_back(candidates[idx]);
         helper(result,res,candidates,target-candidates[idx],idx,n);
        res.pop_back();
        }
         helper(result,res,candidates,target,idx+1,n);
        return ;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     int n=candidates.size();
     int idx=0;
     vector<vector<int>>result;
     vector<int>res;
     helper(result,res,candidates,target,idx,n); 
     return result;  
    }
};