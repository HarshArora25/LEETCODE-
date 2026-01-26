class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>qu;
        // int dist=0;
        qu.push({beginWord,1});
        unordered_set<string>st(wordList.begin(),wordList.end());
        while(!qu.empty()){
            string x=qu.front().first;
            int stp=qu.front().second;
            qu.pop();
            if(x==endWord) return stp;
        for(int i=0;i<x.size();i++){
           char org=x[i];
           for(char ch='a';ch<='z';ch++){
            x[i]=ch;
            if(st.find(x) != st.end()){
                st.erase(x);
                qu.push({x,stp+1});
            }
           }
           x[i]=org;
        }
        }
        return 0;
    }
};