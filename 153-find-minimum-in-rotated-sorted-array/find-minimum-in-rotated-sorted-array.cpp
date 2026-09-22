class Solution {
public:
    int findMin(vector<int>& arr) {
       int n=arr.size();
       int low=0;
       int high=n-1;
       int pos=1e9;
       while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[low]<=arr[mid]){
         pos=min(pos,arr[low]);
         low=mid+1;
        }
        else{
        pos=min(pos,arr[mid]);
        high=mid-1;
        }
       } 
       return pos;

    }
};