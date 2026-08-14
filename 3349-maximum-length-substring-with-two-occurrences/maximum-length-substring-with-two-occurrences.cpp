class Solution {
public:
    int maximumLengthSubstring(string s) {
       int i=0;
       int j=0;
       int n=s.size();
       int count=0;
       vector<int>ch(26,0);
        for(int j=0;j<n;j++){
           ch[s[j]-'a']++;
          while(i<j && ch[s[j]-'a']>2){
            ch[s[i]-'a']--;
          i++;
          }
        count=max(count,j-i+1);
        }
       
       return count;
    }
};