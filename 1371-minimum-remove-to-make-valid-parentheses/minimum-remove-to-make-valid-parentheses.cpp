class Solution {
public:
    string minRemoveToMakeValid(string s) {
     int open=0;
     string result="";
     for(int i=0;i<s.size();i++){
        if(s[i]>='a'  &&  s[i]<='z')
        result+=s[i];
        else if(s[i]=='('){
        open++;
        result+=s[i];
        }
        else{
            if(open>0){
            result+=s[i];
            open--;
            }
        }
     }   
     if(open==0) return result;
     string x="";
     for(int i=result.size()-1;i>=0;i--){
        if(result[i]=='(' && open> 0){
            open--;
            continue;
        }
        x+=result[i];
     }
     reverse(x.begin(),x.end());
     return x;
    }
};