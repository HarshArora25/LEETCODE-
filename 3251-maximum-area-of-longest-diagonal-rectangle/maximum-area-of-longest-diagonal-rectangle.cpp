class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int sum=0,maxi=0,x=1,y=0;
        int i=0,j=0;
     while(i<dimensions.size()){
        sum=0;
        j=0;
        while(j<dimensions[0].size()){
            sum=sum+dimensions[i][j]*dimensions[i][j];
            x*=dimensions[i][j];
            j++;
        }
        if(sum>maxi|| (sum == maxi && x > y)){ // imp condn || (sum == maxi && x > y) agr sum brbr ara to jo side bdi h wo ayngi
            maxi=sum;
            y=x; 
        }
        x=1;
        i++;
     }
     return  y; 
    }
};