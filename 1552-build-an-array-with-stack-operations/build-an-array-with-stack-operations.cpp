class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    vector<string>result;
   int i=1;
   int j=0;
   while(j<target.size()){
    if(target[j]==i){
        result.push_back("Push");
        j++;
    }
    else{
        result.push_back("Push");
        result.push_back("Pop");
    }
    i++;
   }
   return result;
    }
};