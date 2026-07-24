class Solution {
public:
    int numberOfSubstrings(string s) {
     unordered_map<char,int>mpp;
     int n=s.size();
     int j=0;
     int count=0;
     for(int i=0;i<n;i++){
         mpp[s[i]]++;
        while(mpp.size()==3){
          count=count+(n-i);
          mpp[s[j]]--;
           if (mpp[s[j]] == 0) {
              mpp.erase(s[j]);
                }
        j++;
        }
     }  
     return count; 
    }
};