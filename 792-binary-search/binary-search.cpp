class Solution {
public:
    int search(vector<int>& a, int target) {
      int start=0;
      int end=a.size()-1;
      while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]>target){
            end=mid-1;
        }
        else if(a[mid]<target)
        start=mid+1;
        else
        return mid;
      }  
      return -1;
    }
};