class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     unordered_map<string,int>mpp;
     vector<string>result;
     int n=s.size();
     string res="";
     for(int i=0;i<=n-10;i++){
      res=s.substr(i,10);
      mpp[res]++;
      if(mpp[res]==2)
       result.push_back(res);
     }  
     return result; 
    }
};