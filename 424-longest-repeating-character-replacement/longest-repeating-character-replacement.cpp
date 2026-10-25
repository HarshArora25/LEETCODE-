class Solution {
public:
    int characterReplacement(string s, int k) {
     int i=0;
     int j=0;
     int n=s.size();
     int maxi=0,maxfreq=0;
     unordered_map<char,int>mpp;
     while(j<n){
     mpp[s[j]]++;
     maxfreq=max(maxfreq,mpp[s[j]]);
     while(j-i+1-maxfreq>k){
        mpp[s[i]]--;
        i++;
     }
     maxi=max(maxi,j-i+1);
     j++;
     }
     return maxi;
    }
};