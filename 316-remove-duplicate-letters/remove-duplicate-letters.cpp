class Solution {
public:
    string removeDuplicateLetters(string s) {
      int n=s.size();
      vector<int>vec(26,0);
      for(int i=0;i<n;i++){
        vec[s[i]-'a']=i;
      }
      string res="";
      vector<int>vis(26,0);
      for(int j=0;j<n;j++){
        if(vis[s[j]-'a']) continue;
        while(!res.empty() && res.back()>s[j] && vec[res.back()-'a']>j){
            vis[res.back()-'a']=0;
            res.pop_back();
        }  
        res.push_back(s[j]);
        vis[s[j]-'a']=1;
      }
      return res;
    }
};