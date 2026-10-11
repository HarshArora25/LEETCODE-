class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string neww;
       string word;
       while(ss>>word){
       if(!neww.empty()){
           neww=word+ " "+ neww;
       }
       else
       neww=word;
       } 
       
       return neww;
    }
};