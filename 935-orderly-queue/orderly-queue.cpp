class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        string m=s;
        string temp="";
     if(k==1){
     for(int i=0;i<n;i++){
         temp= s.substr(i) + s.substr(0,i);
        if(temp<m)
         m=temp;
     }
     return m;
     }  
     else
     sort(s.begin(),s.end());
     return s;
    }
};