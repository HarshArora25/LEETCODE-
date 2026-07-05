class Solution {
    private:
    bool charac(char ch){
        if(ch=='1' || ch=='3' || ch=='5' || ch=='7' || ch=='9')
        return true;
        else
        return false;
    }
public:
    string largestOddNumber(string num) {
      int j=num.size();
      while(j>=0){
        if(charac(num[j]))
        break;
        j--;
      }
      return num.substr(0,j+1);
    }
};