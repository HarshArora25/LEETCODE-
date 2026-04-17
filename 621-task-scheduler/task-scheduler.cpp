class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       vector<int>charr(26);
       for(int i=0;i<tasks.size();i++){
        charr[tasks[i]-'A']++;
       } 
       priority_queue<int>pq;
       for(int i=0;i<26;i++){
        if(charr[i]>0)
        pq.push(charr[i]);
       }
       int count=0;
       while(!pq.empty()){
        vector<int>temp;
        for(int i=1;i<=n+1;i++){
            if(!pq.empty()){
            int freq=pq.top();
            freq--;
            temp.push_back(freq);
            pq.pop();
        }
        }
        for(auto& it:temp){
            if(it>0)
            pq.push(it);
        }
        if(pq.empty())
        count+=temp.size();
        else
        count+=(n+1);
       }
       return count;
    }
};