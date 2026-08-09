class Solution {
public:
    int largestInteger(int n, int s) {
       int res=9*n;
       if(s>res) return -1;
       if(s==0) return 0;
       int sum=0;
       while(n){
        int mini=min(9,s);
        sum=sum*10+mini;
        s=s-mini;
        n--;
       }
       return sum;
    }
};