class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i = 0;
        while (i < n && num[i] == '0') i++; // agr shuru m 0 h to
            int j = n - 1;
        while (j >= i && ((num[j] - '0') % 2 == 0)) j--; // j ko jb tk ghtao jb tk j %2==0  h
        if (i > j) return "";
         string ans = "";
        for (int k = i; k <= j; k++) {
            ans += num[k];
        }
        return ans;
    }
};
