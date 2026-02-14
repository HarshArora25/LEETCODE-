class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string>visited;
         unordered_set<string>bankset(bank.begin(),bank.end());
        queue<string>q;
        q.push(startGene);
        visited.insert(startGene);
        int level=0;
        while(!q.empty()){
            int size=q.size();
        while(size--){
            string x=q.front();
            q.pop();
        if(x==endGene) return level;
        for(char ch : "ACGT"){
            for(int i=0;i<x.size();i++){
                string res=x;
                res[i]=ch;
            if(visited.find(res)==visited.end() && bankset.find(res)!=bankset.end()){
                visited.insert(res);
                q.push(res);
            }

            }
        }
        }
        level++;
        }
        return -1;
    }
};