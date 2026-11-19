class Solution {
public:
    string orderlyQueue(string s, int k) {
     int n=s.size();
     string neww=s;
    if(k==1){
      for(int i=1;i<n;i++){
         string x=s.substr(i) + s.substr(0,i);
         neww=min(neww,x);
      }
      return neww;
    }
    else{
        sort(s.begin(),s.end());
    }
    return s;
    }
};