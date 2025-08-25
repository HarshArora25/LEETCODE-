class Solution {
    private:
    void result( vector<vector<int>>&ans,vector<int>&temp,int index,int sum,vector<int>& candidates,int target){
        if(target==sum){
            ans.push_back(temp);
            return;
        }
        if(sum>target || index==candidates.size()) return ;
        temp.push_back(candidates[index]);
          result(ans,temp,index,sum+candidates[index],candidates,target);
          temp.pop_back();
           result(ans,temp,index+1,sum,candidates,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        int sum=0;
        result(ans,temp,index,sum,candidates,target);
        return ans;
    }
};