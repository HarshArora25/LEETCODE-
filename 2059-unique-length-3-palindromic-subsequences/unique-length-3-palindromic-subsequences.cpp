class Solution {
public:
    int countPalindromicSubsequence(string s) {
      vector<int>leftpos(26,-1),rytpos(26,-1);
      int n=s.size();
      for(int i=0;i<n;i++){
        if(leftpos[s[i]-'a'] ==-1)
        leftpos[s[i]-'a']=i;
        rytpos[s[i]-'a']=i;
      }  
      unordered_set<string>stt;
      for(int i=0;i<26;i++){
        if(rytpos[i]-leftpos[i]>=2){
            for(int j=leftpos[i]+1;j<rytpos[i];j++){
               string neww = "";
               neww += char(i+'a');
               neww += s[j];
              neww += char(i-'a');
                stt.insert(neww);
            }
        }
      }
      return stt.size();
    }
};