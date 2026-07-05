class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
       vector<string>vec;
       stringstream ss(s);
       string word;
       while(ss>>word)
       vec.push_back(word);
       reverse(vec.begin(),vec.end());
       string result="";
       int m=vec.size();
       for(int i=0;i<m;i++){
         result+=vec[i];
        if(i!=m-1){
        result+=" ";
       } 
       }
       return result;
    }
};