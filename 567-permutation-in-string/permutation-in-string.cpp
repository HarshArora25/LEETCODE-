class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
       int m=s2.size();
       vector<int>freq1(256,0),freq2(256,0);
       if(n>m) return false;
       for(int i=0;i<n;i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
       } 
       if(freq1==freq2) return true;
       for(int j=n;j<s2.size();j++){
        freq2[s2[j]-'a']++;
        freq2[s2[j-n]-'a']--;
        if(freq1==freq2) return true;
       }
       return false;
    }
};