class Solution {
private:
    bool okk(string x,string y){
        if(x.size() !=y.size()+1) return false;
        int i=0,j=0;
        while(i<x.size()){
            if(j<y.size() && x[i]==y[j]){
                i++;
                j++;
            }
            else
            i++;
            if(i==x.size() && j==y.size()) return true;
        }
         return false;
    }
public:
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end() ,[](const string& a,const string& b){
            return(a.length()<b.length());
        });
        vector<int>dp(n,1);
        int maxi=0;
        for(int idx=0;idx<n;idx++){
        for(int prev=0;prev<idx;prev++){
            if( 1+dp[prev]>dp[idx] && okk(words[idx],words[prev])){
                dp[idx]=1+dp[prev];
            } 
        }
            maxi=max(maxi,dp[idx]);
        }
        return maxi;
        
    }
};