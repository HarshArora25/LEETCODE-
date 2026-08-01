class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
      int i=0;
      int n=arr.size();
      priority_queue<pair<double,pair<int,int>>>pq;
      for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            double x=(double)arr[i]/arr[j];
          if(pq.size()<k)
          pq.push({x,{i,j}});
        else if(pq.top().first>x){
            pq.pop();
            pq.push({x,{i,j}});
        }
      } 
    }
       return {arr[pq.top().second.first],arr[pq.top().second.second]};
    }
};