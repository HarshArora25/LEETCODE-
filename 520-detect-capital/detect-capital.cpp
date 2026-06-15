class Solution {
    private:
    bool islower(string x){
        int n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]<'a' ||x[i]>'z'){
        return false;
        }
    }
    return true;
    }
    bool isupper(string x){
        int n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]<'A' ||x[i]>'Z'){
        return false;
        }
    }
    return true;
    }
public:
    bool detectCapitalUse(string word) {
    int n=word.size();
    string x=word.substr(0,1);
    string y=word.substr(1,n);    
    if(isupper(x) && islower(y)) return true;
    if(isupper(word)) return true;
    if(islower(word)) return true;
    return false;
    }
};