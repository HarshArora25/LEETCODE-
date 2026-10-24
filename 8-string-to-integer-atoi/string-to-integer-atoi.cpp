class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int sign=1;
        int i=0;
        while(i<n && s[i]==' '){
        i++;
        }
        if(i<n && s[i]=='+' || s[i]=='-'){
            if(s[i]=='-')
            sign=-1;
            i++;
        }
        long long neww=0;
        while(i<n && s[i]=='0'){
         i++;
        }
        for(int j=i;j<n;j++){
            if(s[j]>='0' && s[j]<='9')
            neww=(neww*10+(s[j]-'0'));
            else 
            break;
           if (sign * neww >= INT_MAX) {
                return INT_MAX;
            }

            if (sign * neww <= INT_MIN) {
                return INT_MIN;
            }
            
            i++;
        }
        return sign*neww;
    }
};