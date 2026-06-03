class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<n;i++){
           string x=strs[i];
           sort(x.begin(),x.end());
            mpp[x].push_back(strs[i]);
        }
        for(auto& it:mpp){
            result.push_back(it.second);
        }
        return result;
    }
};