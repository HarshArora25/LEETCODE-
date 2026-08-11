class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
     string word="";
     unordered_map<char,int>mpp;
     for(auto it:licensePlate){
        if(it>='a' &&  it<='z'){
            mpp[it]++;
        }
        else if(it>='A' && it<='Z'){
            char x= tolower(it);
            mpp[x]++;
        }     
     }   
     for(auto it:words){
        unordered_map<char,int>mpp2;
        int y=it.size();
    for(int i=0;i<y;i++){
      mpp2[it[i]]++;
    }
     bool valid = true;
            for (auto x : mpp) {
                char ch = x.first;
                int freq = x.second;

                if (mpp2[ch] < freq) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                if (word == "" || it.size() < word.size()) {
                    word = it;
                }
            }
        }
        return word;
    }
};