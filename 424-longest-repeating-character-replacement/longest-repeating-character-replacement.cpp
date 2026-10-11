class Solution {
public:
    int characterReplacement(string s, int k) {
      int n=s.size();
      int i=0;
      int maxi=0;
      unordered_map<char,int>mpp;
      int maxifreq=0;
      for(int j=0;j<n;j++){
        mpp[s[j]]++;
      maxifreq=max(maxifreq,mpp[s[j]]);
      while( (j-i+1)-maxifreq >k){
        mpp[s[i]]--;
        i++;  
      }
      maxi=max(maxi,j-i+1);
      }  
      return maxi;
    }
};