class Solution {
    private:
    bool np(int n){
        if(n==0) return false;
        int x;
        while(n>0){
          x=n%10;
          if(x==0) return false;
          n=n/10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        //     if(n==2) return{1,1};
    //    if( (n-1)% 10 !=0) return {n-1,1};    // sare testcase pass ni hore h kyuki agr 1069 jaisa kuch agya to dikkt h
    //    else
    //    return{n-2,2};
    vector<int>res;
    for(int i=0;i<n;i++){
        int x=i;
        int y=n-i;
        if(x+y==n && np(x) && np(y)){
         res.push_back(x);
         res.push_back(y);
         break;
        }
    }
    return res;
    }
};