class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
     int count=0;
     int five=0;
     int ten=0;
     int twenty=0;
     for(auto it:bills){
        if(it==5)
        five++;
        if(it==10){
            if(five>0){
                five--;
                ten++;
            }
            else
            return false;
        }
        if(it==20){
            if(ten>0 && five>0){
                twenty++;
                ten--;
                five--;
            }
            else if(five>2){
                twenty++;
                five=five-3;
            }
            else
            return false;
        }
     }  
     return true; 
    }
};