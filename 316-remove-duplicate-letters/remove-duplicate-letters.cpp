class Solution {
public:
    string removeDuplicateLetters(string s) {
      vector<int>dup(26,0);
      string result;
      for(int i=0;i<s.size();i++){
        dup[s[i]-'a']=i;
      }  
      vector<bool>visited(26,false);
      for(int i=0;i<s.size();i++){
        char ch=s[i];
        int idx=ch-'a';
        if(visited[idx]==true)
        continue;
        while(result.length()>0 && result.back()>ch && dup[result.back()-'a']>i){
             visited[result.back()-'a']=false;
             result.pop_back();
        }
        result.push_back(ch);
        visited[idx]=true;
      }
    return result;
    }
};