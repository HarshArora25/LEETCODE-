class Solution {
public:
    string removeDuplicateLetters(string s) {
    int n=s.size();
    vector<int>vec(26,0);

    for(int i=0;i<s.size();i++){
        vec[s[i]-'a']=i;
    }
     vector<bool>visited(26,false);
     string res="";
     for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(visited[ch-'a']) continue;
        while(!res.empty() && res.back()>ch && vec[res.back()-'a']>i){
             visited[res.back()-'a']=false;
            res.pop_back();
        }
        res.push_back(ch);
        visited[ch-'a']=true;
     }
     return res;
    }
};