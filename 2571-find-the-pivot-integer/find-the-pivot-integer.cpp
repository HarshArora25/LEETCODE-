class Solution {
public:
    int pivotInteger(int n) {
        int total = n*(n+1)/2;
        int sum1 = 0;
        for(int i = 1; i <= n; i++){
            sum1 += i;
            if(2*sum1 - i == total) return i; // sum1 left ka sum + sum1-i ryt ka sum to total hogya 2sum1-i
        }
        return -1;
    }
};
