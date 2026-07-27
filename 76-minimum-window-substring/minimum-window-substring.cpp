class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        int n=s.size();
        int m=t.size();
        int count=0,mini=1e9;
        int start=-1,length=0;
        if(m>n) return "";
        for(auto& it:t)
        mpp2[it]++;
        int i=0,j=0;
        while(j<n){
            mpp1[s[j]]++;
           if (mpp2.find(s[j]) != mpp2.end() &&
                mpp1[s[j]] <= mpp2[s[j]]) {
                    count++;
                   }
            while(count==t.size()){
                   length = j - i + 1;
                if (length < mini) {
                    mini = length;
                    start = i;
                }
                mpp1[s[i]]--;
           if (mpp2.find(s[i]) != mpp2.end() &&
                mpp1[s[i]] < mpp2[s[i]]) 
             count--;
               if(mpp1[s[i]]==0){
            mpp1.erase(s[i]);
            }
               i++;
            }
            j++;
        }
        if(start==-1) return "";
     return s.substr(start,mini);
    }
};