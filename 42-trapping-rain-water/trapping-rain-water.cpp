class Solution {
    private:
     void leftty(vector<int>&height,vector<int>&leftmaxi){
        for(int i=1;i<height.size();i++){
            leftmaxi[i]=max(leftmaxi[i-1],height[i]);
        }
     }
     void rightty(vector<int>&height,vector<int>&rightmaxi){
         for(int i=height.size()-2;i>=0;i--){
            rightmaxi[i]=max(rightmaxi[i+1],height[i]);
        }
     }
public:
    int trap(vector<int>& height) {
       vector<int>leftmaxi(height.size(),0);
       leftmaxi[0]=height[0];
       vector<int>rightmaxi(height.size(),0);
       rightmaxi[height.size()-1]=height[height.size()-1];
       leftty(height,leftmaxi); 
       rightty(height,rightmaxi);

       int sum=0;
       for(int i=0;i<height.size();i++){
        int mini=min(leftmaxi[i],rightmaxi[i]);
        sum=sum+(mini-height[i]);
       }
       return sum;
    }
};