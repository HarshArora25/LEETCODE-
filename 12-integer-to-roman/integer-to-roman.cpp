class Solution {
public:
    string intToRoman(int num) {
     vector<string>symb={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
     vector<int>valu={1000,900,500,400,100,90,50,40,10,9,5,4,1};
     string res="";
     for(int i=0;i<13;i++){
        int x=num/valu[i];
        while(x--){
          res=res+symb[i];
        }
        num=num%valu[i];
     }
     return res;
    }
};