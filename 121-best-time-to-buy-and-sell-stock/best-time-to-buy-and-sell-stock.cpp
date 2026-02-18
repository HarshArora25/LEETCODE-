class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int mini=1e9;
     int maxi=-1e9;
     for(int i=0;i<prices.size();i++){
       if(prices[i]<mini)
       mini=prices[i];
       maxi=max(maxi,prices[i]-mini); 
     }
     return maxi;
    }
};