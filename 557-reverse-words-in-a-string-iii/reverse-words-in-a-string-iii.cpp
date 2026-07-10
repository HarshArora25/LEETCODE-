class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string word;
       string res="";
       while(ss>>word){
        string neww=word;
        reverse(neww.begin(),neww.end());
        res+=neww;
        res=res+" ";
       } 
       res.pop_back();
       return res;
    }
};