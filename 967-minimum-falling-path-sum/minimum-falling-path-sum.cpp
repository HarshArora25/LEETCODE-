// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         // int l=1e9;
//        vector<int>hii(m),byy(m);
//         for(int col=0;col<m;col++)
//        hii[col]=matrix[m-1][col];
//         for(int i=m-2;i>=0;i--){
//         for(int j=0;j<m;j++){
//             int ab=1e9,cd=1e9,ef=1e9;
//             if(j-1>=0)
//              ab=matrix[i][j] +  hii[j-1];
//              cd=matrix[i][j] +  hii[j];
//             if(j+1<m)
//              ef=matrix[i][j] + hii[j+1];
//             byy[j]=min({ab,cd,ef});
//             }
//             hii=byy;
//         }
//         int x=1e9;
//         for(int i=0;i<m;i++){
//          x=min(x,byy[i]);
//         }
//         return x;
//     }
// };
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> prev(n), curr(n);
        // Last row → prev
        for (int j = 0; j < n; j++) 
            prev[j] = matrix[n-1][j];
        for (int i = n-2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int leftDiag = 1e9, down = 1e9, rightDiag = 1e9;

                if (j - 1 >= 0) 
                    leftDiag = matrix[i][j] + prev[j-1];

                down = matrix[i][j] + prev[j];

                if (j + 1 < n) 
                    rightDiag = matrix[i][j] + prev[j+1];

                curr[j] = min({leftDiag, down, rightDiag});
            }

            prev = curr;
        }

        int ans = 1e9;
        for (int j = 0; j < n; j++)
            ans = min(ans, prev[j]);

        return ans;
    }
};
