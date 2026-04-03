class Solution {
public:
    int countPalindromicSubsequence(string s) {
      unordered_set<char>stt;
      int count=0;
      for(int i=0;i<s.size();i++){
        stt.insert(s[i]);
      }  
      for(auto&letter : stt){
         int leftindex=-1,rightindex=-1;
        for(int i=0;i<s.size();i++){
           if(s[i]==letter){
             if(leftindex==-1) leftindex=i;
             rightindex=i;
           }
        }
           if(leftindex !=-1 && rightindex !=-1 && leftindex<rightindex){
            unordered_set<char>res;
            for(int k=leftindex+1;k<rightindex;k++){
              res.insert(s[k]);
            }
            count+=res.size();
           }
           
        }
      return count;

    }
};