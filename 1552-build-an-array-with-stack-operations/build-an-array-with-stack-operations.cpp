class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       stack<int>st;
       vector<string>res;
       int sz=target.size();
       int j=0;
       for(int i=1;i<=n&& j<sz;i++){
         if(target[j]==i){
            res.push_back("Push");
            j++;
         } 
         else{
                res.push_back("Push");
                res.push_back("Pop");
         }
       } 
       return res;
    }
};