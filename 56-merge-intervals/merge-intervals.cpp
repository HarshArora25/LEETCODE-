class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
       vector<vector<int>>vec;
        for(auto& it:intervals){
            if(vec.empty())
            vec.push_back({it[0],it[1]});
            else{
                int frst=vec.back()[0];
                int scnd=vec.back()[1];
                if(it[0]>scnd)
                vec.push_back({it[0],it[1]});
                else if(it[0]<=scnd){
                    if(it[1]<=scnd)
                    continue;
                    else
                    vec.back()[1]=it[1];
                }
            }
        }
        return vec;
    }
};