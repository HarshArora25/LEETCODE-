class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    //    string prefix=strs[0];
    //    for(int i=1;i<strs.size();i++){
    //     while(strs[i].find(prefix) !=0){
    //         prefix.pop_back();
    //     }
    //    } 
    //    return prefix;
    sort(strs.begin(),strs.end());
    string frst=strs[0];
    string lst=strs.back();
    int i=0;
    while(i<frst.size() && i<lst.size() && frst[i] ==lst[i]){
        i++;
    }
    return frst.substr(0,i);
    }
};