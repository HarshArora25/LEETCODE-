class Solution {
public:
    int totalMoney(int n) {
      int x=1;
      int y=1;
      int sum=0;
      for(int i=1;i<=n;i++){
        sum=sum+x;
        if(i%7==0){
        x=y+1;
        y++;
        }
        else
        x++;
      }  
      return sum;
    }
};