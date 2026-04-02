class Solution {
public:
    bool backspaceCompare(string s, string t) {
     string a,b;
     for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='#' && !a.empty()){
            a.pop_back();
        }
        else if(ch=='#' ) continue;
        else{
           a.push_back(ch);
        }
     }
     for(int i=0;i<t.size();i++){
        char ch=t[i];
        if(ch=='#' && !b.empty()){
            b.pop_back();
        }
        else if(ch=='#') continue;
        else{
           b.push_back(ch);
        }
     }
     return a==b;
    }
};