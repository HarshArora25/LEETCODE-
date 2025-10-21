class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
    if(changed.size() %2 !=0)
    return {};
    sort(changed.begin(),changed.end());
    unordered_map<int,int>mpp;
    for(int num:changed){
        mpp[num]++;
    }    
    vector<int>x;
    for(int num: changed){
        if(mpp[num]==0) continue;
        if(mpp[2*num]==0) return{};
        x.push_back(num);
        mpp[num]--;
        mpp[2*num]--;
    }
    return x;
    }
};