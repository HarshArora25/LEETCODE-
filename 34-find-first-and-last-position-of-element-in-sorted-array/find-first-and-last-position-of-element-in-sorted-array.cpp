class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
     int n=arr.size(); 
     int lowpos=-1;
     int highpos=-1;
     int low=0;
     int high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            if(arr[mid]==target)
            lowpos=mid;
            high=mid-1;
        }
        else
        low=mid+1;
     }  
     low=0;
     high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=target){
              if(arr[mid]==target)
            highpos=mid;
           low=mid+1;
        }
        else
       high=mid-1;
     }  
       return {lowpos,highpos};
    }
};