class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int n=temperatures.size();
       vector<int>arr(n,0);
       stack<int>st;
       for(int i=n-1;i>=0;i--){
        while (!st.empty() && temperatures[i] >= temperatures[st.top()]) 
          st.pop();
        if(st.empty()) arr[i]=0;
        else{
            arr[i]=st.top()-i;
        }
        st.push(i);
       } 
       return arr;
    }
};