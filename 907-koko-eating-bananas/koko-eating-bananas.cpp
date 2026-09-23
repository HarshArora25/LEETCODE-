class Solution {
    
private:
      long long func(vector<int>&piles,int mid){
        long long totalcount=0;
        for(int i=0;i<piles.size();i++){
            totalcount+= ceil(double(piles[i])/double(mid));
        }
        return totalcount;
      }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size();
       int high=-1;
       for(int i=0;i<n;i++){
        high=max(high,piles[i]);
       } 
       int low=1;
       while(low<=high){
        int mid=low+(high-low)/2;
        long long helpmeplz=func(piles,mid);
        // if(helpmeplz==h) return mid;
     if(helpmeplz<=h) high=mid-1;
        else low=mid+1;
       }
       return low;
    }
};