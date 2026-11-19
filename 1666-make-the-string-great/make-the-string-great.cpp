class Solution {
public:
    string makeGood(string s) {
       int n=s.size();
       string neww="";
       for(auto& it:s){
        if(!neww.empty() && abs(neww.back()-it)==32){
                neww.pop_back();
        }
        else{
            neww.push_back(it);
        }
       }
       return neww;
    }
};