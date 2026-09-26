class Solution {
private:
     void helpme(vector<vector<int>>&ans,vector<int>&res,int idx,int k,int n){
        if(res.size()==k && n==0){
            ans.push_back(res);
            return ;
        }
         if(res.size()>k || idx>n || idx>9) return ;
         res.push_back(idx);
         helpme(ans,res,idx+1,k,n-idx);
         res.pop_back();
         helpme(ans,res,idx+1,k,n);
         return ;
     }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>>ans;
      vector<int>res;
      int idx=1;
      helpme(ans,res,idx,k,n);
      return ans;  
    }
};