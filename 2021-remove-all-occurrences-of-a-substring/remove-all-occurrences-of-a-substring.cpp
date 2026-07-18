class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
         int n=s.size();
        for(int i=0;i<n;i++){
            if(s.substr(i,m)==part){
                string pre=s.substr(0,i);     
                string suff=s.substr(i+m);
                string neww=pre+suff;
                s=neww;
                i=-1;
                n=s.size();
            }
        }
        return s;
    }
};