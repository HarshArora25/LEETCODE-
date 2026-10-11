class Solution {
private:
        bool ispallind(string& s,int i,int j,int count){
          if(i>=j) return true;
          bool take=false,nottake=false;
          if(s[i]==s[j]){
            take= ispallind(s,i+1,j-1,count);
          }
          else if(s[i] !=s[j]){
            if(count)
            nottake= ispallind(s,i+1,j,count-1) || ispallind(s,i,j-1,count-1);
            else
            nottake=false;
          }
          return take||nottake;
        }
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        return ispallind(s,i,j,1);
    }
};