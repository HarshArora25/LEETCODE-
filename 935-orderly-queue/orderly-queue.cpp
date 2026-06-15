class Solution {
public:
    string orderlyQueue(string s, int k) {
       string mini=s;
        int n=s.size();
        if(k==1){
        for(int i=1;i<n;i++){
            string x= s.substr(i)+s.substr(0,i);
            mini=min(mini,x);
        }
        }
        else{
        sort(s.begin(),s.end());
        return s;
        }
        return mini;
    }
};