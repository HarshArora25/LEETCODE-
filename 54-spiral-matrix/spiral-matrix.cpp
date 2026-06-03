class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        vector<int>x;
        while(left<=right && top<=bottom){
          for(int i=left;i<=right;i++){
            x.push_back(matrix[top][i]);
          }  
          top++;
          for(int i=top;i<=bottom;i++){
            x.push_back(matrix[i][right]);
          }
          right--;
          if(bottom>=top){
            for(int i=right;i>=left;i--){
                x.push_back(matrix[bottom][i]);
            }
              bottom--;
          }
          if(left<=right){
             for(int i=bottom;i>=top;i--){
                x.push_back(matrix[i][left]);
             }
             left++;
          }

        }
        return x;
    }
};