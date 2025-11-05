class Solution {
public:
    int strStr(string haystack, string needle) {
      for(int i=0;i<haystack.size();i++){
        for(int j=i;j<haystack.size();j++){
        if(haystack.substr(i,j-i+1)==needle)
        return i;
      }  
      }
      return -1;
    }
};