class Solution {
    private:
    void leftist(vector<int>&lefty,vector<int>height,int n){
        lefty[0]=height[0];
        for(int i=1;i<n;i++){
            lefty[i]=max(height[i],lefty[i-1]);
        }
    }

    void rightist(vector<int>&righty,vector<int>height,int n){
        righty[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            righty[i]=max(height[i],righty[i+1]);
        }
    }
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lefty(n),righty(n);
        leftist(lefty,height,n);
        rightist(righty,height,n);
        int trapwater=0;
        for(int i=0;i<n;i++){
            trapwater+=(max(0,min(lefty[i],righty[i])-height[i]));
        }
        return trapwater;
    }
};