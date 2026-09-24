class Solution {
private:
int helpme(vector<int>& bloomDay,int mid,int steps,int k){
    // int step=0;
    int count=0;
    for(auto& it:bloomDay){
    if(it<=mid)
     count++;
    else{
        steps=steps+count/k;
        count=0;
    }
    }
     steps=steps+count/k;
    return steps;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
    int n=bloomDay.size();
    if(n< 1LL*m*k) return -1;
    int low=1e9;
    int high=-1e9;
    for(auto it:bloomDay){
        low=min(low,it);
       high=max(high,it);
    }    
    int mini=1e9;
    while(low<=high){
        int mid=low+(high-low)/2;
        int steps=0;
        int func=helpme(bloomDay,mid,steps,k);
        if(func>=m){ mini=min(mini,mid);
        high=mid-1;
        }
        else low=mid+1;
    }
    return mini;
    }
};