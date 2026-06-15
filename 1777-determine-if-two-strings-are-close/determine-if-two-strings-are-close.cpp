class Solution {
public:
    bool closeStrings(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
       if(n != m) return false;
       set<char>st1,st2;
       vector<char>x(26,0),y(26,0);
       for(int i=0;i<n;i++){
        st1.insert(word1[i]);
        st2.insert(word2[i]);
        x[word1[i]-'a']++;
        y[word2[i]-'a']++;
       }  
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       return (st1==st2 && x==y);
    }
};