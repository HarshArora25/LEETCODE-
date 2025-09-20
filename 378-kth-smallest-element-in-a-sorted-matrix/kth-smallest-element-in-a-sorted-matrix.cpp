class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       vector<int>x;
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            x.push_back(matrix[i][j]);
        }
       } 
       priority_queue<int,vector<int>,greater<int>>p;
       for(int i:x)
       p.push(i);
       int y=-1;
       while(k){
        y=p.top();
        p.pop();
        k--;
       }
       return y;
    }
};