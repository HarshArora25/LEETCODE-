class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
       int count=0;
       int k=0,sum=0;
       int i;
       int n=widths.size();
       for( k=0;k<s.size();){
         sum=0;
        while( k<s.size() && sum+widths[s[k]-'a']<=100){
           sum+=widths[s[k]-'a'];
           k++;
        } 
        count++;
       } 
       return {count,sum};
    }
};