class Solution {
private:
    bool isvowel(char& x){
        if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        return true;
        else
        return false;
    }
public:
    string reverseVowels(string s) {
        int j=s.size()-1;
        int i=0;
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isvowel(s[i]))
            i++;
            else if(!isvowel(s[j]))
            j--;
        }
        return s;
    }
};