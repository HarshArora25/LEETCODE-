class Solution {
private:
    vector<int> getNSL(vector<int>& arr, int n) {
        vector<int> nsl(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return nsl;
    }

    vector<int> getNSR(vector<int>& arr, int n) {
        vector<int> nsr(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nsr;
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;

        vector<int> nsl = getNSL(arr, n);
        vector<int> nsr = getNSR(arr, n);

        long long totalSum = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - nsl[i];
            long long right = nsr[i] - i;
            long long contribution = (arr[i] * left % MOD) * right % MOD;
            totalSum = (totalSum + contribution) % MOD;
        }

        return totalSum;
    }
};
