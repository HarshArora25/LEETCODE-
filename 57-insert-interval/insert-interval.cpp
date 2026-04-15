class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end(),[](auto&a ,auto& b){
         return a[0]<b[0];
        }
        );

        vector<vector<int>>intervel;
        intervel.push_back(intervals[0]);

        for(int i=1;i<intervals.size();i++){
        if(intervel.back()[1]<intervals[i][0]){
         intervel.push_back(intervals[i]);
         }
         else{
            intervel.back()[1]=max(intervel.back()[1],intervals[i][1]);
         }
         }
         return intervel;
    }
};