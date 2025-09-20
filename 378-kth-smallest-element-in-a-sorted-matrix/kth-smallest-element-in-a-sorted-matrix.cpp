class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       vector<int>x;
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            x.push_back(matrix[i][j]);
        }
       } 
     priority_queue<int>p;
     for(int i=0;i<k;i++)
     p.push(x[i]);
    for(int i=k;i<x.size();i++){
        int z=p.top();
        if(z>x[i]){
            p.pop();
            p.push(x[i]);
        }

    }
    return p.top();

    }
};