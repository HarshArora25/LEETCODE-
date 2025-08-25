class Solution {
private:
    void result(vector<vector<int>>& ans, vector<int>& temp, int index, int sum, vector<int>& candidates, int target) {
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(sum > target || index == candidates.size()) return;

        
        temp.push_back(candidates[index]);
        result(ans, temp, index + 1, sum + candidates[index], candidates, target);
        temp.pop_back();

       // jb th 2 ya 2 se jyada elemnt same rhenge tb tk skip kro
        int nextIndex = index + 1;
        while(nextIndex < candidates.size() && candidates[nextIndex] == candidates[index]) nextIndex++;
        result(ans, temp, nextIndex, sum, candidates, target);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // sort kiya h taki duplicate handle ho ske mtlb koi same subset repeat na ho
        vector<vector<int>> ans;
        vector<int> temp;
        result(ans, temp, 0, 0, candidates, target);
        return ans;
    }
};
