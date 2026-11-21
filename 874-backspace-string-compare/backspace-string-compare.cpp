class Solution {
public:
    bool backspaceCompare(string s, string t) {
     string s1="";
     string s2="";
     for(auto& it:s){
        if(it=='#' && s1.empty())
         continue;
        else if(it=='#')
        s1.pop_back();
        else
        s1.push_back(it);
     }   
       for(auto& it:t){
        if(it=='#' && s2.empty())
         continue;
        else if(it=='#')
        s2.pop_back();
        else
        s2.push_back(it);
     }   
     return s1==s2;
    }
};