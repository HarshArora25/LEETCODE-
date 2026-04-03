class Solution {
public:
    int minSteps(string s, string t) {
    vector<int>mpp1(26,0),mpp2(26,0);
    if(s.size() != t.size() ) return -1;

    for(int i=0;i<s.size();i++){
        mpp1[s[i]-'a']++;
        mpp2[t[i]-'a']++;
    }
     int count=0;
    for(int i=0;i<s.size();i++){
        int frq=mpp2[s[i]-'a'];
        if(frq>=mpp1[s[i]-'a']) continue;
        else{
            count=count+(mpp1[s[i]-'a']-frq);
            mpp1[s[i]-'a']=0;
        }
    }
    return count;
    }
};