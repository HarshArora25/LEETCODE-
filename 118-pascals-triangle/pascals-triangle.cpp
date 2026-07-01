class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
    vector<vector<int>>pasc;
    for(int i=0;i<n;i++){
        vector<int>row(i+1);
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                row[j]=1;
            }
            else{
                if(i-1>=0 && j-1>=0 )
                row[j]=pasc[i-1][j-1]+pasc[i-1][j];
            }
        }
        pasc.push_back(row);
    }   
      return pasc;
    }
};