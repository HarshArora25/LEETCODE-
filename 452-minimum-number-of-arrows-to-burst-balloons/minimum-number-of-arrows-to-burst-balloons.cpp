class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end());
        vector<int>prev=points[0];
       int count=1;
        for(int i=1;i<points.size();i++){
          int prev_start=prev[0];
          int prev_end=prev[1];
          int curr_start=points[i][0];
          int curr_end=points[i][1];
          if(prev_end<curr_start){
            count++;
            prev=points[i];
          }
          else{
            prev[0]=max(curr_start,prev_start);
            prev[1]=min(curr_end,prev_end);
          }
        }
        return count;
    }
};