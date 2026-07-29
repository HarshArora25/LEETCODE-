class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       int sum=0;
       int n=piles.size();
       for(int i=0;i<n;i++){
        pq.push(piles[i]);
        sum+=piles[i];
       } 
       while(k--){
        int maxi= pq.top();
        pq.pop();
        sum=sum-maxi;
        pq.push((maxi+1)/2);
        sum+=((maxi+1)/2);
       }
       return sum;
    }
};