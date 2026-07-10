class Solution {
    private:
    bool isvowel(char ch){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
        return false;
    }
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<char>vow;
        for(int i=0;i<n;i++){
            if(isvowel(s[i]))
            vow.push_back(s[i]);
        }
        sort(vow.begin(),vow.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
              s[i]=vow[j];
              j++;
            }
        }
        return s;
    }
};