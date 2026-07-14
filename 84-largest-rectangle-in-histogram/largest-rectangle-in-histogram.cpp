class Solution {
private:
void nextsmallest(vector<int>&nsel,vector<int>heights,int n){
    stack<int>st;
for(int i=n-1;i>=0;i--){
 while(!st.empty() && heights[st.top()]>=heights[i])
 st.pop();
 if(!st.empty()){
 nsel[i]=st.top();
 st.push(i);
 }
 else{
    nsel[i]=n;
    st.push(i);
 }
}
}

void prevsmallest(vector<int>&psel,vector<int>heights,int n){
stack<int>st;
for(int i=0;i<n;i++){
 while(!st.empty() && heights[st.top()]>heights[i])
 st.pop();
 if(!st.empty()){
 psel[i]=st.top();
 st.push(i);
 }
 else{
    psel[i]=-1;
    st.push(i);
 }
}
}

public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
     vector<int>psel(n,-1);
     vector<int>nsel(n,n);
     nextsmallest(nsel,heights,n);
     prevsmallest(psel,heights,n);   
     int maxi=0;
     for(int i=0;i<n;i++){
     int width = nsel[i] - psel[i] - 1;
     int area = width * heights[i];
        maxi=max(maxi,area);
     }
     return maxi;
    }
};