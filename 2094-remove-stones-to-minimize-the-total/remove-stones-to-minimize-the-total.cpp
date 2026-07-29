class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       int n=piles.size();
       for(int i=0;i<n;i++){
        pq.push(piles[i]);
       } 
       while(k--){
        int maxi= pq.top();
        pq.pop();
        pq.push((maxi+1)/2);
       }
       int sum=0;
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
       return sum;
    }
};