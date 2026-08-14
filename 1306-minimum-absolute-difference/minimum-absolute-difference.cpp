class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int n=arr.size();
       vector<vector<int>>ans;
       int mini=1e9;
       for(int i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff>mini) continue;
        while(!ans.empty() && mini>diff){
             ans.pop_back();
        }
         mini=min(mini,diff);
        ans.push_back({arr[i],arr[i+1]});
       } 
       return ans;
    }
};