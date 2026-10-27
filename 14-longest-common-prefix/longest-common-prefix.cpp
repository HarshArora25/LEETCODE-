class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string str="";
        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++){
            if(strs[n-1][i]==strs[0][i]){
                str+=strs[n-1][i];
            }
            else
            break;
        }
        return str;
    }
};