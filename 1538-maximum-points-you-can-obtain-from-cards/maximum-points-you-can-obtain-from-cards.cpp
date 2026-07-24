class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int lsum=0;
    int n=cardPoints.size()-1;
    for(int i=0;i<k;i++){
      lsum+=cardPoints[i];
    }  
    int rsum=0;
    int maxi=lsum;
    for(int i=k-1;i>=0;i--){
        lsum=lsum-cardPoints[i];
        rsum=rsum+cardPoints[n];
        n--;
        int totalsum=lsum+rsum;
        maxi=max(maxi,totalsum);
    }
    return maxi;
    }
};