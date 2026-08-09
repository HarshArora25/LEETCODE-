class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
      int n=words.size();
      vector<string>vec;
      for(int i=0;i<n;i++){
        string x=words[i];
      for(int j=0;j<n;j++){
        if(i==j) continue;
        if(words[j].find(x) != string::npos){
         vec.push_back(x);
         break;
      }
      }
      }
      return vec;

    }
};