class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int mini=prices[0];
     int score=-1e9;
     for(auto it:prices){
      score=max(score,it-mini);
      mini=min(mini,it);   
     } 
     return score;  
    }
};