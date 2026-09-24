class Solution {
private:
    int helper(vector<int>&weights,int mid){
        int day=1;
        int count=0;
        for(int i=0;i<weights.size();i++){
            if(count+weights[i]<=mid){
              count=count+weights[i]; 
            }
            else{
                day++;
                count=weights[i];
            }
        }
         return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=0;
        long long high=0;
        for(auto& it:weights){
            low=max(low,(long long)it);
            high+=it;
        }
        // int mini=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int func=helper(weights,mid);
            if(func<=days){ 
            high=mid-1;
            }
            else low=mid+1;
        
        }
        return low;
    }
};