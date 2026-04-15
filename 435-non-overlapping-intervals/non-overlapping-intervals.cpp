class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),[] (auto& a,auto& b){
            return a[1]<b[1];
        });
        int n=intervals.size();
        int tot=-1e9;
        int count=0;
        for(int i=0;i<n;i++){
         if(intervals[i][0]<tot){
            count++;
         }  
         else{
            tot=intervals[i][1];
         }
        }
        return count;
    }
};