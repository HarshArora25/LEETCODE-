class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
    vector<int>x;
    long long MOD=1e9+7;
    long long sum=0;
    for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
    sum+=nums[j];
    x.push_back(sum);
    } 
    }
    sort(x.begin(),x.end());
     sum=0;
    int m=x.size();
    for(int i=0;i<m;i++){
        if(i>=left-1 && i<right)
        sum+=x[i];
    }
    return sum % MOD;
    }
};