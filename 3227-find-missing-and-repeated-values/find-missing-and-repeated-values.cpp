class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        long long x=m*n;
        long long expsum= ((x)*( (x )+1))/2;
        long long expsqsum=(x)*  ((x )+1)* (2*(x)+1)/6;
        long long sqsum=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
                sqsum=sqsum+(grid[i][j] * grid[i][j]);
            }
        }
        long long val1=expsum-sum;
        long long val2= (expsqsum-sqsum)/val1;
        int miss= (val1+val2)/2;
        int repeat=miss-val1;
        return {repeat,miss};


    }
};