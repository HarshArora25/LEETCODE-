class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int>mpp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      int count=0;
     for(int i=0;i<s.size();i++){
     if(i+1<s.size() && mpp[s[i]]<mpp[s[i+1]]){
        count=count-mpp[s[i]];
     }
     else{
        count=count+(mpp[s[i]]);
     }
     }
     return count;
    }
};