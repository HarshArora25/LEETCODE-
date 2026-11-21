class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n=s.size();
        long long len=0;
        for(auto& it:s){
            if(it>='a' && it<='z'){
                len++;
            }
            else{
                len=len*(it-'0');
            }
        }
        for(int i=n-1;i>=0;i--){
            k=k%len;
            if(k==0){
                if(s[i]>='a' && s[i]<='z')
                return string(1,s[i]);
            }
        else if(s[i]>='1' && s[i]<='9'){
            len=len/(s[i]-'0');
        }
        else
            len--;
        }
        return "";
    }
};