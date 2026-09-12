class Solution {
private:
bool ispallindrom(string x){
    string y=x;
    reverse(x.begin(),x.end());
    return x==y;
}
void helpme(string s,int start,int n,vector<vector<string>>&result,vector<string>&res){
    if(start>=n){
        result.push_back(res);
        return ;
    }
    string x="";
     for(int i=start;i<n;i++){
        x=x+s[i];
    if(ispallindrom(x)){
        res.push_back(x);
        helpme(s,i+1,n,result,res);
        res.pop_back();
    }
       }
}
public:
    vector<vector<string>> partition(string s) {
      int n=s.size();
      vector<vector<string>>result;
      vector<string>res;
    //   string x="";
       helpme(s,0,n,result,res);  
       return result;
    }
};