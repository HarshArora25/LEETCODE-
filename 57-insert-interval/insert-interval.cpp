class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> resultant;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<int> x = intervals[0];
        for (int i = 1; i < intervals.size(); i++) {
            int prev_start = x[0];
            int prev_end = x[1];
            int curr_start = intervals[i][0];
            int curr_end = intervals[i][1];
            if (prev_end < curr_start) {
                resultant.push_back(x);
                x = intervals[i];
            } else {
                x[0] = min(prev_start, curr_start);
                x[1] = max(prev_end, curr_end);
            }
        }
        resultant.push_back(x);
        return resultant;
    }
};
// m kya krra hu isme jo new inetrval h wo bhi jo input diya h usme hi push krr rha hu or phr use sort krra hu or phir dekhra hu iterate krke ki konse 2 interval overlap krre h jo overlap krre h wo vector m push krra hu