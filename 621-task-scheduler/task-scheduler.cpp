class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      int sz=tasks.size();
      vector<int>mpp(26,0);
      int time=0;
      for(int i=0;i<sz;i++){
       mpp[tasks[i]-'A']++;
      }
      priority_queue<int>pq;
      for(int i=0;i<26;i++){
        if(mpp[i]>0)
        pq.push(mpp[i]);
      }
      while(!pq.empty()){
        vector<int>temp;
      for(int i=1;i<=n+1;i++){
       if(!pq.empty()){
         int elem=pq.top();
         elem--;
         temp.push_back(elem);
         pq.pop();
       }
      } 
      for(auto& fr:temp){
        if(fr>0)
        pq.push(fr);
      } 
      if(pq.empty())
      time+=temp.size();
      else
      time+=n+1;
      }
      return time;
    }
};