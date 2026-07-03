class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n=intervals.size();
       vector<vector<int>>res;
       sort(intervals.begin(),intervals.end());
       res.push_back({intervals[0][0],intervals[0][1]});
       for(int i=1;i<n;i++){
        int frst=res.back()[1];
        if(frst>=intervals[i][0]){
            int elem1=res.back()[0];
                  if(frst>intervals[i][1])
                  continue;
            res.pop_back();
            res.push_back({elem1,intervals[i][1]});
        }
        else
        res.push_back({intervals[i][0],intervals[i][1]});      
       }
    return res;
    }
};