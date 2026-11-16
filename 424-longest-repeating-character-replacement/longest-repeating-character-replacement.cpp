class Solution {
public:
    int characterReplacement(string s, int k) {
    int i=0;
    int n=s.size();
    int maxi=0,maxfreq=0;
    unordered_map<int,int>mpp;
    for(int j=0;j<s.size();j++){
        mpp[s[j]]++;
        maxfreq=max(maxfreq,mpp[s[j]]);
        while(i<n && j-i+1-maxfreq>k){
            mpp[s[i]]--;
            i++;
        }
        maxi=max(maxi,j-i+1);
    }
    return maxi;
    }
};