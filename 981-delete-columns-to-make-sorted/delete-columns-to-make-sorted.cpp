class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            string x="";
            for(int k=0;k<n;k++){
                x+=strs[k][i];
            }
            string z=x;
            sort(x.begin(),x.end());
            if(z!=x) count++;
        }
            return count;
    }
};