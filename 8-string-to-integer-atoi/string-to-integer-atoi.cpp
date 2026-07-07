class Solution {
    
    long long resultt=0;
    void result(int i,string s,int n){
        if(i>=n || !isdigit(s[i]))
        return ;
        resultt=resultt*10+(s[i]-'0');
        if(resultt>INT_MAX) return ;
        if(resultt<INT_MIN) return ;
        result(i+1,s,n);
    }

public:
    int myAtoi(string s) {
     int n=s.size();
     int i=0;
     while(i<n && s[i]==' ') 
     i++;   
    int sign=1;
    if(i<n && s[i]=='-' ){
    sign=-1;
    i++;
    }
    else if(i<n && s[i]=='+'){
        i++;
    }
    result(i,s,n);
    resultt=resultt*sign;
    if(resultt>INT_MAX) return INT_MAX;
    if(resultt<INT_MIN) return INT_MIN;
    return resultt;
    }
};