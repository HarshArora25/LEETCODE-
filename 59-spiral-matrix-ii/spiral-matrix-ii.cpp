class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          if(n==0) return {}; // check empty

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        vector<vector<int>>mat(n,vector<int>(n,0));
        int x=1;
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++)
                mat[top][i]=x++;
            top++;


            for (int i = top; i <= bottom; i++)
                mat[i][right]=x++;
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    mat[bottom][i]=x++;
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                  mat[i][left]=x++;
                left++;
            }
        }

        return mat;
    }
};