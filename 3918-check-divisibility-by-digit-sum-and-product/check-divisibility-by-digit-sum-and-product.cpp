class Solution {
public:
    bool checkDivisibility(int n) {
      int sum=0,prod=1,x=n,y=n;
      while(x){
        sum=sum+(x%10);
        x=x/10;
      }
      while(y){
        prod=prod*(y%10);
        y=y/10;
      }
      int val=sum+prod;
      if( n % val ==0) return true;
      return false;
    }
};