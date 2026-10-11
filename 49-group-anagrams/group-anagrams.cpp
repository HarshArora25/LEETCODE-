class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mpp;
        for(auto& it:strs){
            string x=it;
            sort(x.begin(),x.end());
            mpp[x].push_back(it);
        }
        vector<vector<string>>vec;
        for(auto& it:mpp){
             vector<string>res;
            for(auto& its:it.second)
             res.push_back(its);
        vec.push_back(res);
        }
        return vec;
    }
};