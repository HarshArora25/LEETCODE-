class Solution {
    private:
    int vowels(string x,vector<char>&z){
        int count=0;
        for(int i=0;i<x.size();i++){
           char c=tolower(x[i]);
           for(int j=0;j<z.size();j++){
            if(c==z[j])
            count++;
           }
        }
        return count;
    }
public:
    bool halvesAreAlike(string s) {
        vector<char>z={'a','e','i','o','u'};
        string x="",y="";
        for(int i=0;i<s.size()/2;i++){
        x=x+s[i];
        y=y+s[s.size()/2+i];
    }
       int a=vowels(x,z);
       int b=vowels(y,z);
       return a==b;
    }
};