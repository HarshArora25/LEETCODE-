class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>x;
       for(int i=1;i<=n/2;i++){
        x.push_back(i);
        x.push_back(-i);
       } 
       if(n%2!=0)
       x.push_back(0);
       return x;
    }
};