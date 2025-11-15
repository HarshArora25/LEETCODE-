class Solution {
public:
    int minimumDeletions(string s) {
    // aproach 1 ba remove krra hu bss
    // stack<char>st;
    // int count=0;
    // for(int i=0;i<s.size();i++){
    //  if(!st.empty() && s[i]=='a' && st.top()=='b'){
    //  st.pop();
    //  count++;
    //  }
    //  else{
    //     st.push(s[i]);
    //  }
    // }
    // return count;

    // approach 2
    int counta=0;
    int countb=0;
    int n=s.size();
    int mini=INT_MAX;
    vector<int>b(n,0);
    vector<int>a(n,0);
    for(int i=0;i<s.size();i++){
       b[i]=countb;
      if(s[i]=='b') countb++;
    }
    for(int i=n-1;i>=0;i--){
        a[i]=counta;
      if(s[i]=='a') counta++;
    }
    // int count;
    for(int i=0;i<n;i++){
        mini=min(mini,a[i]+b[i]);
    }
    return mini;
    }
};