class Solution {
public:
    bool closeStrings(string word1, string word2) {
      int n=word1.size();
      int m=word2.size();
      if(n !=m) return false;
      vector<int>res1(26,0),res2(26,0);
      for(auto it:word1){
        res1[it-'a']++;
      }  
      for(auto it:word2){
        res2[it-'a']++;
      }
      for(int i=0;i<26;i++){
        if((res1[i]==0 && res2[i] !=0) || (res1[i] !=0 && res2[i]==0))
        return false;
      }
      sort(res1.begin(),res1.end());
      sort(res2.begin(),res2.end());
      return res1==res2;
    }
};