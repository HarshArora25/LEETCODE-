class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        int n=startGene.size();
    unordered_set<string> stt(bank.begin(), bank.end());
    queue<pair<string,int>>qu;
    qu.push({startGene,0});
    vector<char>letters({'A','C','G','T'});
    while(!qu.empty()){
        string fnd=qu.front().first;
        int lvl=qu.front().second;
        qu.pop();
        if(fnd==endGene) return lvl;
    for(int i=0;i<4;i++){
        for(int j=0;j<n;j++){
          string org=fnd;
          org[j]=letters[i];
          if(stt.find(org) !=stt.end()){
            qu.push({org,lvl+1});
            stt.erase(org);
            continue;
          }          
        }

    }

    }
    return -1;
    }
};