class Solution {
public:
    string intToRoman(int num) {
     vector<int>val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
     vector<string>roman{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
     string res="";
     int i=0;
    
     for(int j=0;j<val.size();j++){
        int times=num/val[j];
       if(times){
         for(int i=0;i<times;i++)
         res=res+roman[j];
       }
       num=num%val[j];
     }
     return res;
      
    }
};