class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> st;

        for (long long current : nums) {
            while (!st.empty()) {
                long long common = gcd(st.back(), current);

                if (common == 1) {
                    break;
                }

                current = (st.back() / common) * current;
                st.pop_back();
            }

            st.push_back(current);
        }

        vector<int> result;

        for (long long value : st) {
            result.push_back(static_cast<int>(value));
        }

        return result;
    }
};