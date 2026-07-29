class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      int n=nums.size();
      unordered_map<int,int>mpp;
      for(auto it:nums)
      mpp[it]++;
      vector<pair<int,int>>vec;
      for(auto& it:mpp){
        vec.push_back({it.first,it.second});
      }
      sort(vec.begin(),vec.end(),[](auto& a,auto& b){
        return a.second>b.second;
      });
      vector<int>res;
      for(int i=0;i<vec.size() && k;i++){
        res.push_back(vec[i].first);
        k--;
      }
      return res;
    }
};