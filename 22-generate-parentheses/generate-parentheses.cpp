class Solution {
private:
        void helper(vector<string>&result,int left,int ryt,string& res,int n){
        //  if(left>n || ryt>n) return ;
         if(left==n && ryt==n){
            result.push_back(res);
            return ;
         }
         if(left<n){
           res=res+"(";
           helper(result,left+1,ryt,res,n);
           res.pop_back();
         }
         if( ryt<left){
           res+=")";
           helper(result,left,ryt+1,res,n);
           res.pop_back();
         }
        
         }
public:
    vector<string> generateParenthesis(int n) {
      vector<string>result;
      int left=0;
      int ryt=0;
      string res="";
       helper(result,left,ryt,res,n);
      return result;
    }
};