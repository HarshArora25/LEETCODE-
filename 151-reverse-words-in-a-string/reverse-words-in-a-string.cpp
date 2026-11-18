class Solution {
public:
    string reverseWords(string s) {
      stringstream ss(s);
      string word="";
      vector<string>result;
      while(ss>>word){
        result.push_back(word);
      }  
      int sz=result.size();
      string ans="";
      for(int i=sz-1;i>=0;i--){
        ans=ans+result[i];
        ans+=" ";
      }
      ans.pop_back();
      return ans;
    }
};