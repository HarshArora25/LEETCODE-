class Solution {
public:
    string frequencySort(string s) {
      int n=s.size();
      unordered_map<char,int>mpp;
      for(auto& it:s)
      mpp[it]++;
      vector<pair<char,int>>vec(mpp.begin(),mpp.end());
       
      sort(vec.begin(),vec.end(),[](auto& a,auto& b){
        return a.second>b.second;
      });
      string ress="";
      for(auto& it:vec)
      ress.append(it.second,it.first);
      return ress;
    }
};