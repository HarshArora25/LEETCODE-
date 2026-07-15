class Solution {
private:
    void nextgreater(int n,vector<int>& temperatures,vector<int>& nge){
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            st.pop();
            if(!st.empty()) nge[i]=st.top();
            st.push(i);
        }
    }
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>nge(n,0);
        nextgreater(n,temperatures,nge);
        for(int i=0;i<n;i++){
            if(nge[i]==0) continue;
            else{
                nge[i]=nge[i]-i;
            }
        }
        return nge;
    }
};