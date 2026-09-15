class Solution {
private:
const int MOD = 1e9 + 7;
    long long poww(long long b,long long n){
    if( n==0) return 1;
    long long half=poww(b,n/2);
    long long result = (half * half) % MOD;
    if(n % 2==1){
        result = (result * b) % MOD;
    }
    return result;
    }
public:
    int countGoodNumbers(long long n) {
     return ( poww(4,n/2)*poww(5,(n+1)/2)) % MOD;   
    }
};