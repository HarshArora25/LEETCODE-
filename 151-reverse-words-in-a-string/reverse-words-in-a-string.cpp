class Solution {
public:
    string reverseWords(string s) {
      stringstream ss (s);
      vector<string>res;
      string word;
      while(ss>>word){
        res.push_back(word);
      }
      reverse(res.begin(),res.end());
      string ans;
      for(int i=0;i<res.size();i++){
        ans+=res[i];
        ans+=" ";
      }
      ans.pop_back();
      return ans;

    }
};