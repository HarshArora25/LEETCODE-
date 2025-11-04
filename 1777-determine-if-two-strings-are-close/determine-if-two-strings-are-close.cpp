class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>x(26,0);
        vector<int>y(26,0);
        
        for(int i=0;i<word1.size();i++){
            x[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++){
            y[word2[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if( (x[i]==0 && y[i] !=0)  || (y[i]==0 && x[i]!=0 ) ){
                return false;
            }
        }
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       return x==y;
        
    }
};