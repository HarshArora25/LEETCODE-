class Solution {
public:
    int numberOfSubstrings(string s) {
       int n=s.size();
       int i=0;
       unordered_map<char,int>mpp;
       int count=0;
       for(int j=0;j<n;j++){
        mpp[s[j]]++;
        while(mpp.size()==3){
            count=count+(n-j);
            mpp[s[i]]--;
            if(mpp[s[i]]==0){
              mpp.erase(s[i]);        
            }
            i++;
        }
       } 
       return count;
    }
};