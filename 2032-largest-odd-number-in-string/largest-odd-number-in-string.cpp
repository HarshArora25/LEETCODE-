class Solution {
public:
    string largestOddNumber(string num) {
      int i=0;int j=num.size()-1;
      while(j>=0){
        int dig=num[j]-'0';
        if(dig%2 !=0){
            break;
        }
        j--;
      }  
      string res="";
      if(j>=0){
        while(i<=j){
            res+=num[i];
            i++;
        }
      }
      else
      return "";
      return res;
    }
};