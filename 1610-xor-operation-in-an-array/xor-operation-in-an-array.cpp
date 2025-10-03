class Solution {
public:
    int xorOperation(int n, int start) {
    vector<int>x(n);
      for(int i=0;i<n;i++) {
        x[i]=start+2*i;
      }
      int res=0;
      for(int i=0;i<n;i++){
        res=res^x[i];
      }
      return res;
    }
};