class Solution {
private:
        bool helper(string s, unordered_set<string>&st,int i,int n,vector<int>&dp){
            if(i>=n) return true;
            if(st.find(s) !=st.end()) return true;
            if(dp[i] !=-1) return dp[i];
            for(int l=1;l<n;l++){
                string temp=s.substr(i,l);
                if(st.find(temp) !=st.end() && helper(s,st,l+i,n,dp)){
                    return dp[i]=true;
                }
            }
            return dp[i]=false;
        }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string>st;
        for(auto&it : wordDict){
            st.insert(it);
        }
        vector<int>dp(n+1,-1);
        return helper(s,st,0,n,dp);
    }
};