class Solution {
public:
    string removeDuplicateLetters(string s) {
     int n=s.size();
     vector<int>vec(26,0);
     for(int i=0;i<s.size();i++)
     vec[s[i]-'a']=i;
     string res="";
     vector<int>vis(26,0);
     for(int i=0;i<n;i++){
        if(vis[s[i]-'a']) continue;
        while(!res.empty() && res.back()>s[i] && vec[res.back()-'a']>i){
            vis[res.back()-'a']=0;
             res.pop_back();
        }
        res.push_back(s[i]);
        vis[s[i]-'a']=1;
     }   
     return res;
    }
};