class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        vector<int>vec(26,0);
        for(auto& it: s){
            vec[it-'a']++;
        if(vec[it-'a']>(n+1)/2) return "";
        }
        priority_queue<pair<int,char>>pq;
        for(int i='a';i<='z';i++){
            if(vec[i-'a']==0) continue;
            else
            pq.push({vec[i-'a'],i});
        }
        string res="";
        while(pq.size()>=2){
            int times=pq.top().first;
            char elem=pq.top().second;
            pq.pop();
            int times2=pq.top().first;
            char elem2=pq.top().second;
            pq.pop();
            res.push_back(elem);
            times--;
            if(times) pq.push({times,elem});
            res.push_back(elem2);
            times2--;
            if(times2) pq.push({times2,elem2});     
        }
        if(!pq.empty()) res.push_back(pq.top().second);
          return res;
    }
};