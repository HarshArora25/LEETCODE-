class Solution {
public:
    string removeStars(string s) {
       int n=s.size();
       string neww="";
       for(int i=0;i<n;i++){
        if(neww.empty() ) neww.push_back(s[i]);
        else if(s[i]=='*')
        neww.pop_back();
        else
        neww.push_back(s[i]);
       } 
       return neww;
    }
};