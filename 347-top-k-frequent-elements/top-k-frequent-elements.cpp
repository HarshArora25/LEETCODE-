class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    unordered_map<int,int>mpp;
    for(int it:nums){
        mpp[it]++;
    }    
    for(auto&it:mpp){
        pq.push({it.second,it.first});
        if(pq.size()>k)
        pq.pop();
    }
     vector<int>res;
    while(!pq.empty()){
        int elem=pq.top().second;
        res.push_back(elem);
        pq.pop();
    }
    return res;
    }
};