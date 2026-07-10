class Solution {
public:
    bool backspaceCompare(string s, string t) {
    string new1="";
    string new2="";
     int n=s.size();
     int m=t.size();
    for(int i=0;i<n;i++){
        if( !new1.empty() && s[i]=='#')
        new1.pop_back();
        else if(new1.empty() && s[i]=='#') continue;
        else 
        new1.push_back(s[i]);
    }
    for(int j=0;j<m;j++){
        if( !new2.empty() && t[j]=='#')
        new2.pop_back();
        else if(new2.empty() && t[j]=='#') continue;
        else
        new2.push_back(t[j]);
    }
     return new1==new2;
    }
};