class Solution {
public:
    void nsel(int n,vector<int>&nse,vector<int>height){
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && height[st.top()]>=height[i]){
                st.pop();
            }
           nse[i]= st.empty()?n:st.top();
            st.push(i);
        }
    }

     void psel(int n,vector<int>&pse,vector<int>height){
                stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]>height[i]){
                st.pop();
            }
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nse(n),pse(n);
        nsel(n,nse,heights);
        psel(n,pse,heights);
        int maxi=0;
        for(int i=0;i<n;i++){
         int width=nse[i]-pse[i]-1;
         maxi=max(maxi,width*heights[i]);
        }
        return maxi;
    }
};