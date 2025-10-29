class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        int a=1;
       while(a<=n){
         a=a*2;
       } 
       return a-1;
    }
};