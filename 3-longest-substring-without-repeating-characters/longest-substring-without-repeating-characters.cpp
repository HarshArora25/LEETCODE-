class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.size();
     unordered_set<char>stt;
     int i=0,j=0,maxi=0;
     while(j<n){
        if(stt.find(s[j])  !=stt.end()){
          stt.erase(s[i]);
          i++;
        }
        else{
        stt.insert(s[j]);
        j++;
        }
        maxi=max(maxi,j-i);
     }  
     return maxi; 
    }
};