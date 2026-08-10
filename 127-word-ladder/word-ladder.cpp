class Solution {
public:
    int ladderLength(string s, string e, vector<string>& words) {
     int n=words.size();
        queue<pair<string,int>>qu;
        unordered_set<string>stt(words.begin(),words.end());
        qu.push({s,1});
        stt.erase(s);
        // vector<vector<string>>result;
        int step;
        while(!qu.empty()){
            string word=qu.front().first;
             step=qu.front().second;
            qu.pop();
            if(word==e) return step;
           for(int i=0;i<word.size();i++){
               char org=word[i];
               for(char ch='a';ch<='z';ch++){
                  word[i]=ch;
                  if(stt.find(word) != stt.end()){
                      stt.erase(word);
                  qu.push({word,step+1});
                  }
               }
               word[i]=org;
           }
        }
        return 0;
    }
};