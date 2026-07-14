class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n != m) return false;
        for(int i=0;i<n;i++){
            string x=s.substr(0,i);
            string y=s.substr(i,n);
            string res=y+x;
            if(res==goal) return true;
        }
       return false;
    }
};